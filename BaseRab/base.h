#ifndef TEST_H
#define TEST_H
#include <cstdint>

enum {
  rv_reg_zero = 0, // Регистр специального назначения. Жеско привязан к 0.
  rv_reg_ra,       // Return address
  rv_reg_sp,       // Steck pointer
  rv_reg_gp,       // Global pointer
  rv_reg_tp,       // Thread pointer
  rv_reg_t0,       // Temporary register 0
  rv_reg_t1,       // Temporary register 1
  rv_reg_t2,       // Temporary register 2
  rv_reg_s0,       // Save register 0 / frame pointer
  rv_reg_s1,       // Save register 1
  rv_reg_a0,       // Function argument 0
  rv_reg_a1,       // Function argument 1
  rv_reg_a2,       // Function argument 2
  rv_reg_a3,       // Function argument 3
  rv_reg_a4,       // Function argument 4
  rv_reg_a5,       // Function argument 5
  rv_reg_a6,       // Function argument 6
  rv_reg_a7,       // Function argument 7
  rv_reg_s2,       // Save register 2
  rv_reg_s3,       // Save register 3
  rv_reg_s4,       // Save register 4
  rv_reg_s5,       // Save register 5
  rv_reg_s6,       // Save register 6
  rv_reg_s7,       // Save register 7
  rv_reg_s8,       // Save register 8
  rv_reg_s9,       // Save register 9
  rv_reg_s10,      // Save register 10
  rv_reg_s11,      // Save register 11
  rv_reg_t3,       // Temporary register 3
  rv_reg_t4,       // Temporary register 4
  rv_reg_t5,       // Temporary register 5
  rv_reg_t6,       // Temporary register 6
};

const char rv_regs[][10] = {"zero", "ra", "sp",  "gp",  "tp", "t0", "t1", "t2",
                            "s0",   "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
                            "a6",   "a7", "s2",  "s3",  "s4", "s5", "s6", "s7",
                            "s8",   "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

const char separator[] = ",";
const char ending[] = ";";

// Comments
const char startComment[] = "/*";
const char endComment[] = "*/";

typedef struct {
  uint32_t opcode;
  uint32_t rd;
} CmdLine;

uint32_t getCodeRvReg(const char *);
const char *getStrRvReg(uint32_t);

// Пропускает все разделительные символы и возвращяет указатель на начало слова
char *dropSpace(char *str);

// Пропускает все разделительные символы и возвращяет указатель на начало слова
uint8_t isseparator(char c);

char *dropSeparator(char *str);

// Пропускает коментарии и возвращяет указатель на начало слова
int isStartComment(char *str);

int isEndComment(char *str);

char *dropComent(char *str);

// Правило для получения opcode
char *getNewStrOpcode(char *str, char **NewOpcode);

// Правило для получения operand
char *getNewStrOperand(char *str, char **NewOperand);

// Пропускает символ конца
uint8_t isending(char c);

char *dropEnding(char *str);

#endif // !TEST_H
