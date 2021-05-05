#include <stdio.h>

// 调和平均数
double converculate_average(double x, double y)
{
  return 1 / ((1 / x + 1 / y) / 2);
}

int main(void)
{
  printf("%lf", converculate_average(32.1, 22.2));
  return 0;
}