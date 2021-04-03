#include <stdio.h>
#define SQUARES 64

int main(void)
{
  int count = 1;
  double current = 1.0, total = 0;
  while (count < SQUARES)
  {
    current = current * 2;
    total += current;
    count++;
    printf("now is %d,%.3e,%.3e.\n", count, current, total);
  }
  printf("total is %.3e.\n", total);
  return 0;
}