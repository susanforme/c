#include <stdio.h>

int main(void)
{
  const float MAX = 100;
  const float MIN = 0;
  float score, min = MAX, max = MIN;
  while (scanf("%f", &score) == 1)
  {
    if (score < MIN && score > MAX)
    {
      continue;
    }
    max = score > max ? score : max;
    if (max != score)
    {
      min = score < min ? score : min;
    }
  }
  printf("最大值为%f,最小值为%f.\n", max, min);
  return 0;
}