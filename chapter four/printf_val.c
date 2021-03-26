// printf的返回值
#include <stdio.h>

int main(void)
{
  const int i_n1 = 33;
  int rv;
  // printf 打印的字符串长度
  rv = printf("your varabile value is %d.\n", i_n1);
  printf("your output has %d characters .\n", rv);
  return 0;
}