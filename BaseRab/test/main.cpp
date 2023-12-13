#include "../base.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void run_tests();

int main(int argc, char *argv[]) {
  run_tests();
  return 0;
}

int testArray_rv_regs() {
  uint32_t num = -1;
  if (!strcmp(rv_regs[rv_reg_zero], "zero"))
    num++;
  if (!strcmp(rv_regs[rv_reg_ra], "ra"))
    num++;
  if (!strcmp(rv_regs[rv_reg_sp], "sp"))
    num++;
  if (!strcmp(rv_regs[rv_reg_gp], "gp"))
    num++;
  if (!strcmp(rv_regs[rv_reg_tp], "tp"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t0], "t0"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t1], "t1"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t2], "t2"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s0], "s0"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s1], "s1"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a0], "a0"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a1], "a1"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a2], "a2"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a3], "a3"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a4], "a4"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a5], "a5"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a6], "a6"))
    num++;
  if (!strcmp(rv_regs[rv_reg_a7], "a7"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s2], "s2"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s3], "s3"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s4], "s4"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s5], "s5"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s6], "s6"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s7], "s7"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s8], "s8"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s9], "s9"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s10], "s10"))
    num++;
  if (!strcmp(rv_regs[rv_reg_s11], "s11"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t3], "t3"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t4], "t4"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t5], "t5"))
    num++;
  if (!strcmp(rv_regs[rv_reg_t6], "t6"))
    num++;
  if (num == rv_reg_t6)
    return 1;
  return 0;
}

int testFunction_getStrRvReg() {
  uint32_t num = -1;
  if (!strcmp(getStrRvReg(rv_reg_zero), "zero"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_ra), "ra"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_sp), "sp"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_gp), "gp"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_tp), "tp"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t0), "t0"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t1), "t1"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t2), "t2"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s0), "s0"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s1), "s1"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a0), "a0"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a1), "a1"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a2), "a2"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a3), "a3"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a4), "a4"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a5), "a5"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a6), "a6"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_a7), "a7"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s2), "s2"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s3), "s3"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s4), "s4"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s5), "s5"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s6), "s6"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s7), "s7"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s8), "s8"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s9), "s9"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s10), "s10"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_s11), "s11"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t3), "t3"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t4), "t4"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t5), "t5"))
    num++;
  if (!strcmp(getStrRvReg(rv_reg_t6), "t6"))
    num++;
  if (num == rv_reg_t6)
    return 1;
  return 0;
}

int testFunction_getCodeRvReg() {
  uint32_t num = -1;
  if (rv_reg_zero == getCodeRvReg(rv_regs[rv_reg_zero]))
    num++;
  if (rv_reg_ra == getCodeRvReg(rv_regs[rv_reg_ra]))
    num++;
  if (rv_reg_sp == getCodeRvReg(rv_regs[rv_reg_sp]))
    num++;
  if (rv_reg_gp == getCodeRvReg(rv_regs[rv_reg_gp]))
    num++;
  if (rv_reg_tp == getCodeRvReg(rv_regs[rv_reg_tp]))
    num++;
  if (rv_reg_t0 == getCodeRvReg(rv_regs[rv_reg_t0]))
    num++;
  if (rv_reg_t1 == getCodeRvReg(rv_regs[rv_reg_t1]))
    num++;
  if (rv_reg_t2 == getCodeRvReg(rv_regs[rv_reg_t2]))
    num++;
  if (rv_reg_s0 == getCodeRvReg(rv_regs[rv_reg_s0]))
    num++;
  if (rv_reg_s1 == getCodeRvReg(rv_regs[rv_reg_s1]))
    num++;
  if (rv_reg_a0 == getCodeRvReg(rv_regs[rv_reg_a0]))
    num++;
  if (rv_reg_a1 == getCodeRvReg(rv_regs[rv_reg_a1]))
    num++;
  if (rv_reg_a2 == getCodeRvReg(rv_regs[rv_reg_a2]))
    num++;
  if (rv_reg_a3 == getCodeRvReg(rv_regs[rv_reg_a3]))
    num++;
  if (rv_reg_a4 == getCodeRvReg(rv_regs[rv_reg_a4]))
    num++;
  if (rv_reg_a5 == getCodeRvReg(rv_regs[rv_reg_a5]))
    num++;
  if (rv_reg_a6 == getCodeRvReg(rv_regs[rv_reg_a6]))
    num++;
  if (rv_reg_a7 == getCodeRvReg(rv_regs[rv_reg_a7]))
    num++;
  if (rv_reg_s2 == getCodeRvReg(rv_regs[rv_reg_s2]))
    num++;
  if (rv_reg_s3 == getCodeRvReg(rv_regs[rv_reg_s3]))
    num++;
  if (rv_reg_s4 == getCodeRvReg(rv_regs[rv_reg_s4]))
    num++;
  if (rv_reg_s5 == getCodeRvReg(rv_regs[rv_reg_s5]))
    num++;
  if (rv_reg_s6 == getCodeRvReg(rv_regs[rv_reg_s6]))
    num++;
  if (rv_reg_s7 == getCodeRvReg(rv_regs[rv_reg_s7]))
    num++;
  if (rv_reg_s8 == getCodeRvReg(rv_regs[rv_reg_s8]))
    num++;
  if (rv_reg_s9 == getCodeRvReg(rv_regs[rv_reg_s9]))
    num++;
  if (rv_reg_s10 == getCodeRvReg(rv_regs[rv_reg_s10]))
    num++;
  if (rv_reg_s11 == getCodeRvReg(rv_regs[rv_reg_s11]))
    num++;
  if (rv_reg_t3 == getCodeRvReg(rv_regs[rv_reg_t3]))
    num++;
  if (rv_reg_t4 == getCodeRvReg(rv_regs[rv_reg_t4]))
    num++;
  if (rv_reg_t5 == getCodeRvReg(rv_regs[rv_reg_t5]))
    num++;
  if (rv_reg_t6 == getCodeRvReg(rv_regs[rv_reg_t6]))
    num++;
  if (num == rv_reg_t6)
    return 1;
  return 0;
}

int testStruct_CmdLine() {
  CmdLine *t = NULL;
  t = (CmdLine *)malloc(sizeof(CmdLine));
  free(t);
  t = NULL;
  if (t == NULL) {
    return 1;
  }
  return 0;
}

int testFunction_dropSpace() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "   text";
    char *it = text;
    it = dropSpace(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "\ttext";
    char *it = text;
    it = dropSpace(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "\t\t\t\ttext";
    char *it = text;
    it = dropSpace(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "\0\t\t\ttext";
    char *it = text;
    it = dropSpace(it);
    if (!it) {
      num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_dropSeparator() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = ",text";
    char *it = text;
    it = dropSeparator(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = ",,,,,text";
    char *it = text;
    it = dropSeparator(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "text";
    char *it = text;
    it = dropSeparator(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "";
    char *it = text;
    it = dropSeparator(it);
    if (!it) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = ",\0,text";
    char *it = text;
    it = dropSeparator(it);
    if (!it) {
      num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_dropComent() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "/**/text";
    char *it = text;
    it = dropComent(it);
    if (it) {
      if (*it == 't')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "/*text*/D";
    char *it = text;
    it = dropComent(it);
    if (it) {
      if (*it == 'D')
        num++;
    }
  }
  {
    num_check++;
    char text[] = "/*text*/";
    char *it = text;
    it = dropComent(it);
    if (!it) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "D/*text";
    char *it = text;
    it = dropComent(it);
    if (it) {
      if (*it == 'D') {
        num++;
      }
    }
  }
  {
    num_check++;
    char text[] = "/*tex*t";
    char *it = text;
    it = dropComent(it);
    if (!it) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "/*tex*t/";
    char *it = text;
    it = dropComent(it);
    if (!it) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "/*text";
    char *it = text;
    it = dropComent(it);
    if (!it) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "";
    char *it = text;
    it = dropComent(it);
    if (it) {
      if (*it == 0x00)
        num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_getNewStrOpcode() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "text D";
    char *it = text;
    char *newOpcode = NULL;
    it = getNewStrOpcode(it, &newOpcode);
    if (it) {
      if ((*it == ' ') && (!strcmp("text", newOpcode)))
        num++;
    }
    if (newOpcode)
      free(newOpcode);
  }
  {
    num_check++;
    char text[] = "text\tD";
    char *it = text;
    char *newOpcode = NULL;
    it = getNewStrOpcode(it, &newOpcode);
    if (it) {
      if ((*it == '\t') && (!strcmp("text", newOpcode)))
        num++;
    }
    if (newOpcode)
      free(newOpcode);
  }
  {
    num_check++;
    char text[] = "";
    char *it = text;
    char *newOpcode = NULL;
    it = getNewStrOpcode(it, &newOpcode);
    if (it) {
      if (*it == 0x00) {
        num++;
      }
    }
    if (newOpcode)
      free(newOpcode);
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_getNewStrOperand() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "text,D";
    char *it = text;
    char *newOperand = NULL;
    it = getNewStrOperand(it, &newOperand);
    if (it) {
      if ((*it == ',') && (!strcmp("text", newOperand)))
        num++;
    }
    if (newOperand)
      free(newOperand);
  }
  {
    num_check++;
    char text[] = "text;D";
    char *it = text;
    char *newOperand = NULL;
    it = getNewStrOperand(it, &newOperand);
    if (it) {
      if ((*it == ';') && (!strcmp("text", newOperand)))
        num++;
    }
    if (newOperand)
      free(newOperand);
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_isBnBinaty() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "0b1";
    char *it = text;
    if (isBnBinary(it)) {
        num++;
    }
  }
  {
    num_check++;
    char text[] = "0b";
    char *it = text;
    if (!isBnBinary(it)) {
        num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_isBnOctal() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "0o1";
    char *it = text;
    if (isBnOctal(it)) {
        num++;
    }
  }
  {
    num_check++;
    char text[] = "0o";
    char *it = text;
    if (!isBnOctal(it)) {
        num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_isBnDecimal() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "0d1";
    char *it = text;
    if (isBnDecimal(it)) {
        num++;
    }
  }
  {
    num_check++;
    char text[] = "0d";
    char *it = text;
    if (!isBnDecimal(it)) {
        num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

int testFunction_isBnHex() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "0x1";
    char *it = text;
    if (isBnHex(it)) {
        num++;
    }
  }
  {
    num_check++;
    char text[] = "0x";
    char *it = text;
    if (!isBnHex(it)) {
        num++;
    }
  }
  {
    num_check++;
    char text[] = "0";
    char *it = text;
    if (!isBnHex(it)) {
        num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

void run_tests() {
  char strSuccess[] = "\e[0;32mSUCCESS\e[0m:";
  char strError[] = "\e[1;31mERROR\e[0m:";
  {
    char name[] = "testStruct_CmdLine";
    if (testStruct_CmdLine()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testArray_rv_regs";
    if (testArray_rv_regs()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_getCodeRvReg";
    if (testFunction_getCodeRvReg()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_getStrRvReg";
    if (testFunction_getStrRvReg()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_dropSpace";
    if (testFunction_dropSpace()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_dropSeparator";
    if (testFunction_dropSeparator()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_dropComent";
    if (testFunction_dropComent()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_getNewStrOpcode";
    if (testFunction_getNewStrOpcode()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_getNewStrOperand";
    if (testFunction_getNewStrOperand()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_isBnBinaty";
    if (testFunction_isBnBinaty()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_isBnOctal";
    if (testFunction_isBnOctal()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_isBnDecimal";
    if (testFunction_isBnDecimal()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
  {
    char name[] = "testFunction_isBnHex";
    if (testFunction_isBnHex()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
}
