#include <stdio.h>
#define SIZE 4

int main(void)
{
  short dates[SIZE];
  short *pd;
  double money[SIZE];
  double *pm;
  pd = dates;
  pm = money;
  for (int i = 0; i < SIZE; i++)
  {
    printf("索引为%d,short地址为%10p,double地址为%10p.\n", i, pd + i, pm + i);
  }
  return 0;
}
