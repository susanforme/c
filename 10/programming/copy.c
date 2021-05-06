#include <stdio.h>
#include <string.h>
#define LENGTH 5
void copy_arr(double source[], int n, double target[])
{
  for (int i = 0; i < n; i++)
  {
    target[i] = source[i];
  }
}
void copy_ptr(double *source, int n, double *target)
{
  for (int i = 0; i < n; i++)
  {
    *(target + i) = *(source + i);
  }
}
void copy_ptrs(double *start, double *end, double *target)
{
  int n = 0;
  while (start < end)
  {
    *(target + n) = *start++;
    n++;
  }
}
void show_arr(const double source[], int size, const char name[])
{
  for (int i = 0; i < size; i++)
  {
    printf("%s,index为%d的数为%lf\n", name, i, source[i]);
  }
}
int main(void)
{
  double source[LENGTH] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[LENGTH], target2[LENGTH], target3[LENGTH];
  copy_arr(source, LENGTH, target1);
  show_arr(target1, LENGTH, "target1");
  copy_ptr(source, LENGTH, target2);
  show_arr(target2, LENGTH, "target2");
  copy_ptrs(source, source + LENGTH, target3);
  show_arr(target3, LENGTH, "target3");
  return 0;
}