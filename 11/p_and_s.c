#include <stdio.h>

int main(void)
{
  const char *msg = "dont be a fool!";
  const char *cop = msg;
  // 指针地址不同,指针指向的地址相同
  printf("%s,%p\n", msg, &msg);
  printf("%s,%p", cop, &cop);
  return 0;
}