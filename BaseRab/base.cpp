#include "base.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>

uint32_t getCodeRvReg(const char *str) {
  if (!strcmp(str, "zero"))
    return rv_reg_zero;
  if (!strcmp(str, "ra"))
    return rv_reg_ra;
  if (!strcmp(str, "sp"))
    return rv_reg_sp;
  if (!strcmp(str, "gp"))
    return rv_reg_gp;
  if (!strcmp(str, "tp"))
    return rv_reg_tp;
  if (!strcmp(str, "t0"))
    return rv_reg_t0;
  if (!strcmp(str, "t1"))
    return rv_reg_t1;
  if (!strcmp(str, "t2"))
    return rv_reg_t2;
  if (!strcmp(str, "s0"))
    return rv_reg_s0;
  if (!strcmp(str, "s1"))
    return rv_reg_s1;
  if (!strcmp(str, "a0"))
    return rv_reg_a0;
  if (!strcmp(str, "a1"))
    return rv_reg_a1;
  if (!strcmp(str, "a2"))
    return rv_reg_a2;
  if (!strcmp(str, "a3"))
    return rv_reg_a3;
  if (!strcmp(str, "a4"))
    return rv_reg_a4;
  if (!strcmp(str, "a5"))
    return rv_reg_a5;
  if (!strcmp(str, "a6"))
    return rv_reg_a6;
  if (!strcmp(str, "a7"))
    return rv_reg_a7;
  if (!strcmp(str, "s2"))
    return rv_reg_s2;
  if (!strcmp(str, "s3"))
    return rv_reg_s3;
  if (!strcmp(str, "s4"))
    return rv_reg_s4;
  if (!strcmp(str, "s5"))
    return rv_reg_s5;
  if (!strcmp(str, "s6"))
    return rv_reg_s6;
  if (!strcmp(str, "s7"))
    return rv_reg_s7;
  if (!strcmp(str, "s8"))
    return rv_reg_s8;
  if (!strcmp(str, "s9"))
    return rv_reg_s9;
  if (!strcmp(str, "s10"))
    return rv_reg_s10;
  if (!strcmp(str, "s11"))
    return rv_reg_s11;
  if (!strcmp(str, "t3"))
    return rv_reg_t3;
  if (!strcmp(str, "t4"))
    return rv_reg_t4;
  if (!strcmp(str, "t5"))
    return rv_reg_t5;
  if (!strcmp(str, "t6"))
    return rv_reg_t6;
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
      puts("WARNING: endComment not found");
      return NULL;
    }
  }
  return str;
}

// Правило для получения opcode
char *getStrOpcode(char *) {
  puts("Fix me: getStrOpcode");
  return NULL;
}

// Правило для получения operand
char *getStrOperand(char *) {
  puts("Fix me: getStrOperand");
  return NULL;
}

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
