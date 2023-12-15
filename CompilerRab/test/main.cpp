#include "../lexical_analysis.h"
#include <iostream>

void run_tests();

int main(){
  run_tests();
}

int testFunction_getStrCode() {
  uint32_t num = 0;
  uint32_t num_check = 0;
  {
    num_check++;
    char text[] = "add x1,x2,x3;";
    uint32_t line = 0;
    lexical_analysis t;
    char *it = text;
    if (!t.getStrCode(text, line)) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "add x1    ,       x2  ,\t\t\t\tx1\t;";
    uint32_t line = 1;
    lexical_analysis t;
    char *it = text;
    if (!t.getStrCode(text, line)) {
      num++;
    }
  }
  {
    num_check++;
    char text[] = "nul\t;";
    uint32_t line = 2;
    lexical_analysis t;
    char *it = text;
    if (!t.getStrCode(text, line)) {
      num++;
    }
  }
  if (num == num_check)
    return 1;
  return 0;
}

void run_tests(){
  char strSuccess[] = "\e[0;32mSUCCESS\e[0m:";
  char strError[] = "\e[1;31mERROR\e[0m:";
  {
    char name[] = "testFunction_getStrCode";
    if (testFunction_getStrCode()) {
      printf("%s %s\n", strSuccess, name);
    } else {
      printf("%s %s\n", strError, name);
    }
  }
}
