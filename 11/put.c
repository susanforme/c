#include <stdio.h>
void put1(const char *str)
{
  // 指向空字符的时候*str为0
  while (*str)
  {
    putchar(*str++);
  }
}

int main(void)
{
  put1("123");
  return 0;
}