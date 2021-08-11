#include <stdio.h>

int sum(const int sum[], int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += sum[i];
  }
  return total;
}
int main(void)
{
  return 0;
}