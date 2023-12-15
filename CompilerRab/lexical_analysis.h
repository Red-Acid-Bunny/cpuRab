#ifndef LEXICAL_ANALYSIS_H
#define LEXICAL_ANALYSIS_H
#include <cstdint>
#include <cstdlib>

typedef struct lexemes {
  uint32_t line;
  uint32_t numOperands;
  char *Opcode;
  char *Operand_1;
  char *Operand_2;
  char *Operand_3;

  void freeAll() {
    if (Opcode) {
      free(Opcode);
    }
    if (Operand_1) {
      free(Operand_1);
    }
    if (Operand_2) {
      free(Operand_2);
    }
    if (Operand_3) {
      free(Operand_3);
    }
  }
} lexemes;

class lexical_analysis {
private:
  lexemes *lex;
  void filling(char *str, uint32_t line);
  void checkNULL(char c, char *str, uint32_t line);

public:
  lexical_analysis();

  int getStrCode(char *str, uint32_t line);
  void printData();

  ~lexical_analysis();
};

#endif // !LEXICAL_ANALYSIS_H
