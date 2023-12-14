#include "base.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <cmath>

uint32_t getCodeRvReg(const char *str) {
  for (uint32_t i = startReg; i <= endReg; i++) {
    if (!strcmp(str, rv_regs[i]))
      return i;
  }
  return -1;
}

const char *getStrRvReg(uint32_t code) {
  if (code <= rv_reg_t6) {
    return rv_regs[code];
  }
  return NULL;
}

// Пропускает все разделительные символы и возвращяет указатель на начало слова
char *dropSpace(char *str) {
  char *it = str;
  if (str) {
    for (; *it; it++) {
      if (!isspace(*it))
        return it;
    }
  }
  return NULL;
}

// Пропускает все разделительные символы и возвращяет указатель на начало слова
uint8_t isseparator(char c) {
  uint32_t size = strlen(separator);
  for (uint32_t i = 0; i < size; i++) {
    if (separator[i] == c) {
      return 1;
    }
  }
  return 0;
}

char *dropSeparator(char *str) {
  char *it = str;
  if (str) {
    for (; *it; it++) {
      if (!isseparator(*it)) {
        return it;
      }
    }
  }
  return NULL;
}

// Пропускает символ конца
uint8_t isending(char c) {
  uint32_t size = strlen(separator);
  for (uint32_t i = 0; i < size; i++) {
    if (ending[i] == c) {
      return 1;
    }
  }
  return 0;
}

char *dropEnding(char *str) {
  char *it = str;
  if (str) {
    for (; *it; it++) {
      if (!isending(*it)) {
        return it;
      }
    }
  }
  return NULL;
}

// Пропускает коментарии и возвращяет указатель на начало слова
int isStartComment(char *str) {
  uint32_t size = strlen(str);
  if (size > strlen(startComment)) {
    char *temp = (char *)malloc(sizeof(char) * size + 1);
    strcpy(temp, str);
    *(temp + 2) = 0x00;
    if (!strcmp(temp, startComment)) {
      free(temp);
      return 1;
    }
    free(temp);
  }
  if (size == strlen(startComment)) {
    if (!strcmp(str, startComment)) {
      return 1;
    }
  }
  return 0;
}

int isEndComment(char *str) {
  uint32_t size = strlen(str);
  if (size > strlen(endComment)) {
    char *temp = (char *)malloc(sizeof(char) * size + 1);
    strcpy(temp, str);
    *(temp + 2) = 0x00;
    if (!strcmp(temp, endComment)) {
      free(temp);
      return 1;
    }
    free(temp);
  }
  if (size == strlen(endComment)) {
    if (!strcmp(str, endComment)) {
      return 1;
    }
  }
  return 0;
}

char *dropComent(char *str) {
  char *pStr = str;
  if (*pStr) {
    if (isStartComment(pStr)) {
      uint32_t size = strlen(endComment);
      while (*pStr) {
        if (isEndComment(pStr)) {
          if (*(pStr + size) != 0x00) {
            return pStr + size;
          }
          return NULL;
        }
        pStr++;
      }
      printf("WARNING: endComment not found: \'%s\'\n", str);
      return NULL;
    }
  }
  return str;
}

// Правило для получения opcode
char *getNewStrOpcode(char *str, char **NewOpcode) {
  if (str) {
    char *it = str;
    char *end = NULL;
    uint32_t size = strlen(str);
    for (; *it; it++) {
      if (isspace(*it)) {
        break;
      }
    }
    char tempChar = *it;
    *it = 0x00;
    size = strlen(str);
    *NewOpcode = (char *)malloc(sizeof(char) * size + 1);
    strcpy(*NewOpcode, str);
    *(*NewOpcode + size) = 0x00;
    *it = tempChar;
    return it;
  }
  return NULL;
}

// Правило для получения operand
char *getNewStrOperand(char *str, char **NewOperand) {
  if (str) {
    char *it = str;
    char *end = NULL;
    uint32_t size = strlen(str);
    for (; *it; it++) {
      if (isseparator(*it) || isending(*it)) {
        break;
      }
    }
    char tempChar = *it;
    *it = 0x00;
    size = strlen(str);
    *NewOperand = (char *)malloc(sizeof(char) * size + 1);
    strcpy(*NewOperand, str);
    *(*NewOperand + size) = 0x00;
    *it = tempChar;
    return it;
  }
  return NULL;
}

uint8_t isBnBinary(char *str) {
  uint8_t res = 0;
  char *it = str;
  if ((*it == bn_basis[bn_binary][0]) &&
      (*(it + 1) == bn_basis[bn_binary][1]) && (*(it + 2) != 0x00)) {
    return 1;
  }
  return 0;
}

uint8_t isBnOctal(char *str) {
  uint8_t res = 0;
  char *it = str;
  if ((*it == bn_basis[bn_octal][0]) && (*(it + 1) == bn_basis[bn_octal][1]) &&
      (*(it + 2) != 0x00)) {
    return 1;
  }
  return 0;
}

uint8_t isBnDecimal(char *str) {
  uint8_t res = 0;
  char *it = str;
  if ((*it == bn_basis[bn_decimal][0]) &&
      (*(it + 1) == bn_basis[bn_decimal][1]) && (*(it + 2) != 0x00)) {
    return 1;
  }
  return 0;
}

uint8_t isBnHex(char *str) {
  uint8_t res = 0;
  char *it = str;
  if ((*it == bn_basis[bn_hex][0]) && (*(it + 1) == bn_basis[bn_hex][1]) &&
      (*(it + 2) != 0x00)) {
    return 1;
  }
  return 0;
}

const char digits[] = "0123456789abcdef";
uint8_t isDigits(char c, uint32_t basis){
  if(basis < strlen(digits)){
    for(uint32_t i = 0; i<basis; i++){
      if(digits[i] == c){
        return 1;
      }
    }
  }
  return 0;
}

uint8_t getDigits(char c, uint32_t basis){
  if(basis < strlen(digits)){
    for(uint32_t i = 0; i<basis; i++){
      if(digits[i] == c){
        return i;
      }
    }
  }
  printf("Это не цифра!!!\n");
  abort();
}


uint32_t binaryAtoi(char *str, int *errorCode){
  uint32_t res = 0;
  const uint32_t basis = 2;
  if(isBnBinary(str)){
    uint32_t size = strlen(str) - 2;
    char *temp = (char*)malloc(sizeof(char)*size+1);
    strcpy(temp, str+2);
    temp[size] = 0x00;
    for(uint32_t i = 0; i>size; i++){
      if(isDigits(temp[i], basis)){
        res += getDigits(temp[i], basis)*pow(basis, (size-1-i)); 
      }
      else {
        // Не подходит
        *errorCode = -1;
      }
    }
    free(temp);
  }else{
    // Не подходит
    *errorCode = -1;
  }

  return res;
}
uint32_t octalAtoi(char *str);
uint32_t decimalAtoi(char *str);
uint32_t hexAtoi(char *str);


//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
// end
