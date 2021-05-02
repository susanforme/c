#include <stdio.h>

double power(double num, int power)
{
  double result = 1;
  int pow = power >= 0 ? power : -power;
  if (!num)
  {
    result = 0;
  }
  else
  {
    if (!pow)
    {
      result = 1;
    }
    else
    {
      for (int i = 0; i < pow; i++)
      {
        result *= num;
      }
    }
  }
  if (power < 0)
  {
    result = 1 / result;
  }
  return result;
}
int main(void)
{
  double num;
  int pow;
  scanf("%lf", &num);
  scanf("%d", &pow);
  printf("\n结果是%lf", power(num, pow));
  return 0;
}