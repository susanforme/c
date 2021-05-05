#include <stdio.h>
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define RANK1 360
#define RANK2 108
#define RANK3 252

int main(void)
{
  double kwh, bill;
  printf("请输入你家的用电度数.\n");
  scanf("%lf", &kwh);
  if (kwh < RANK1)
  {
    bill = kwh * RATE1;
  }
  else if (kwh < RANK1 + RANK2)
  {
    bill = RANK1 * RATE1 + (kwh - RANK1) * RATE2;
  }
  else if (kwh < RANK1 + RANK2 + RANK3)
  {
    bill = RANK1 * RATE1 + RANK2 * RATE2 + (kwh - RANK1 - RANK2) * RATE3;
  }
  else
  {
    bill = RANK1 * RATE1 + RANK2 * RATE2 + RANK3 * RATE3 + (kwh - RANK1 - RANK2 - RANK3) * RATE4;
  }
  printf("你家的电费是%.2lf.\n", bill);
  return 0;
}