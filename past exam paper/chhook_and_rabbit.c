#define CHOOK_LEG 2
#define RABBIT_LEG 4
#include <stdio.h>

int main(void)
{
  // 错误写法
  // int head = 35, leg = 94;
  // int rabbit, chook;
  // rabbit = (94 - 35 * 2) / 2;
  // chook = 35 - rabbit;
  // printf("chook is %d.rabbit is %d.\n", chook, rabbit);
  for (int i = 1; i <= 35; i++)
  {
    int j = 35 - i;
    if (i * CHOOK_LEG + j * RABBIT_LEG == 94)
    {
      printf("chook is %d.rabbit is %d.\n", i, j);
      break;
    }
  }
  return 0;
}