#include <stdio.h>

#include "inc.h"
#include "include1.h"
#include "include2.h"

int main(int argc, char *argv[])
{
  printf("Hello from includes.c\n");
  printf("Hello from %s\n", INC_STRING);
  printf("Hello from %s\n", INCLUDE1_STRING);
  printf("Hello from %s\n", INCLUDE2_STRING);
  return 0;
}
