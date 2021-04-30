#include <stdio.h>

int main(void)
{
  char ch;
  // 注意只能处理单个字符,字符集范围0-255，EOF为-1，end of file
  while ((ch = getchar()) != EOF)
  {
    putchar(ch);
  }
  return 0;
}