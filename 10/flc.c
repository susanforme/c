#include <stdio.h>
#define COLS 4
int sum(const int ar[], int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += ar[i];
  }
  return total;
}

int main(void)
{
  int *p;
  // gcc不支持
  // p = (int[2]){10, 20};
  printf("%d.\n", sum(p, 2));
  return 0;
}