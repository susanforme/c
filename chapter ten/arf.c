#include <stdio.h>
#define SIZE 5

void show_arr(const int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("index为%d的数为%d\n", i, arr[i]);
  }
}
void mult_arr(int arr[], int size, int mult)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] *= mult;
  }
}
int main(void)
{
  int num[SIZE] = {7, 9, 2, 3, 5};
  show_arr(num, SIZE);
  mult_arr(num, SIZE, 3);
  show_arr(num, SIZE);
  return 0;
}