#define MSG "i am special."
#include <stdio.h>

int main(void)
{
  char ar[] = MSG;
  const char *pt = MSG;
  // 地址为409000
  printf("这段字符串的地址为%10p.\n", "i am special.");
  // 地址为61fe0a
  printf("ar地址为%10p.\n", ar);
  // 地址为409000
  printf("pt地址为%10p.\n", pt);
  // 地址为409000
  printf("MSG地址为%10p.\n", MSG);
  // 14 8
  printf("%zd,%zd", sizeof(ar), sizeof(pt));
  return 0;
}