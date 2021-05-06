#define ROW 3
#define COLUMN 5
#include <stdio.h>

void multiple_two(int (*arr)[COLUMN], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < COLUMN; j++)
    {
      *(*(arr + i) + j) *= 2;
    }
  }
}
void show_two_dimension(int (*arr)[COLUMN], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < COLUMN; j++)
    {
      printf("当前索引为%d,%d的值为%d.\n", i, j, arr[i][j]);
    }
  }
}
int main(void)
{
  int arr[ROW][COLUMN] = {{1, 3, 2, 4, 5}, {2, 4, 6, 2, 1}, {10, 22, 13, 12, 11}};
  int(*pt)[COLUMN] = arr;
  show_two_dimension(arr, ROW);
  multiple_two(pt, ROW);
  show_two_dimension(arr, ROW);
  return 0;
}