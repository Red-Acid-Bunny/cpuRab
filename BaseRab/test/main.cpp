#include "../base.h"
#include <cstdio>
#include <cstdlib>

void run_tests();

int main(int argc, char *argv[]) {
  run_tests();
  return 0;
}

int testStruct_CmdLine() { 
  CmdLine *t = NULL;
  t = (CmdLine *)malloc(sizeof(CmdLine));
  free(t);
  t = NULL;
  if(t == NULL){
    return 1;
  }
  return 0; }

void run_tests() {
  char name[] = "testStruct_CmdLine";
  if (testStruct_CmdLine()) {
    printf("SUCCESS: %s\n", name);
  }else{
    printf("ERROR: %s\n", name);
  }
}
