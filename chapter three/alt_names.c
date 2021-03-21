#include <stdio.h>
// 可移植类型，std是标准的意思
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
  // 8位最快最小整型变量
  int_fast8_t testNum = 33;
  // c语言中会把多个连续字符串组成一个字符串
  printf("the number is %" PRIdFAST8 ".\n", testNum);
  return 0;
}