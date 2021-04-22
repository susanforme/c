// 求序列前几项的和。
#include <stdio.h>

int main(void)
{
  int limit;
  double time = 0;

  printf("Enter the number of terms of you want!\n");
  scanf("%d", &limit);
  for (int power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2)
  {
    time += 1.0 / power_of_2;
    printf("time is %lf,when terms =%d.\n", time, t_ct);
  }
  return 0;
}