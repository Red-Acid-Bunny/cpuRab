#include "lexical_analysis.h"
#include "../BaseRab/base.h"
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>

lexical_analysis::lexical_analysis() {
  this->lex = (lexemes *)malloc(sizeof(lexemes));
}

lexical_analysis::~lexical_analysis() { this->lex->freeAll(); }

int lexical_analysis::getStrCode(char *str, uint32_t line) {
  if (!str) {
    // Указатель на NULL
    return -1;
  }
  if (strlen(str) <= 0) {
    // Пустая строка
    return -2;
  }

  filling(str, line);
  printData();
  return 0;
}

void lexical_analysis::checkNULL(char c, char *str, uint32_t line) {
  if (c == 0x00) {
    printf("line: \'%u\', \'%s\'. Пропущен символ окончания \';\'\n", line,
           str);
    abort();
  }
}

void lexical_analysis::filling(char *str, uint32_t line) {
  this->lex->line = line;
  char *it = str;
  it = getNewStrOpcode(it, &(this->lex->Opcode));
  checkNULL(*it, str, line);
  it = dropSpace(it);
  if (isending(*it)) {
    this->lex->numOperands = 0;
    return;
  }
  it = getNewStrOperand(it, &(this->lex->Operand_1));
  checkNULL(*it, str, line);
  it = dropSpace(it);
  it = dropSeparator(it);
  it = dropSpace(it);
  checkNULL(*it, str, line);
  if (isending(*it)) {
    this->lex->numOperands = 1;
    return;
  }
  it = getNewStrOperand(it, &(this->lex->Operand_2));
  checkNULL(*it, str, line);
  it = dropSpace(it);
  it = dropSeparator(it);
  it = dropSpace(it);
  checkNULL(*it, str, line);
  if (isending(*it)) {
    this->lex->numOperands = 2;
    return;
  }
  it = getNewStrOperand(it, &(this->lex->Operand_3));
  checkNULL(*it, str, line);
  it = dropSpace(it);
  it = dropSeparator(it);
  it = dropSpace(it);
  checkNULL(*it, str, line);
  if (isending(*it)) {
    this->lex->numOperands = 3;
    return;
  }
}

void lexical_analysis::printData() {
  printf("Lex\nline: \'%u\'\numOperands: \'%u\'\nOpcode: \'%s\'\nOperand_1: "
         "\'%s\'\nOperand_2: \'%s\'\nOperand_3: \'%s\'\n",
         this->lex->line, this->lex->numOperands, this->lex->Opcode,
         this->lex->Operand_1, this->lex->Operand_2, this->lex->Operand_3);
}
