#include "base.h"
#include <cstdint>
#include <cstdlib>
#include <cstring>

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
