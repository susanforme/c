// 把字符串看做指针
#include <stdio.h>

int main(void)
{
  printf("%s,%p,%c", "we", "are", *"family.");
  return 0;
}