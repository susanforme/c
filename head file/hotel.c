#include <stdio.h>
#include "hotel.h"

int menu(void)
{
  int code;
  printf("\n%s\n", STARS);
  printf("请输入如下选项。\n");
  printf("1) 如家     2) 迪拜.\n");
  printf("3) 钓鱼台   4) 海南.\n");
  printf("5) 关闭");
  printf("\n%s\n", STARS);
  while (scanf("%d", &code) != 1 || (code < 1 || code > 5))
  {
    printf("请输入1-4的整数.\n");
  }
  return code;
}
int getNights(void)
{
  int nights;
  printf("请输入入住时间。\n");
  while (scanf("%d", &nights) != 1 || nights < 1)
  {
    printf("请输入大于0整数\n");
  }
  return nights;
}

void showPrice(double rate, int nights)
{
  double total = 0.0;
  double factor = 1.0;
  for (int n = 1; n < nights; n++)
  {
    factor *= DISCOUNT;
    total += rate * factor;
  }
  printf("您此次消费为%.2f。谢谢。\n", total);
}
