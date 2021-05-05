#include <stdio.h>

double cubic(double d);

int main(void)
{
  double d;
  printf("you need input a double value!\n");
  scanf("%lf", &d);
  printf("cubic is %lf", cubic(d));
  return 0;
}
double cubic(double d)
{
  return d * d * d;
}