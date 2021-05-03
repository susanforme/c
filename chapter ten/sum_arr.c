#include <stdio.h>
#define SIZE 10

int sum(int *start, int *end)
{
  int total = 0;
  while (start < end)
  {
    total += *start++;
  }
  return total;
}
int main(void)
{
  int num[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("和为%d.\n", sum(num, num + SIZE));
  return 0;
}