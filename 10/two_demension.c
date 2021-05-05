// 二维数组
#include <stdio.h>
#define ROW 2
#define COLUMN 3

int main(void)
{
  // 2行3列
  int arr[ROW][COLUMN] = {{1, 2, 3}, {4, 5, 6}};
  for (int i = 0; i < ROW; i++)
  {
    for (int j = 0; j < COLUMN; j++)
    {
      printf("第%d行,第%d列,值为%d.\n", i + 1, j + 1, arr[i][j]);
    }
  }
  printf("地址是%p,%p,%p,%p", arr, arr[0], &arr[0][0], &arr[1][0]);
  return 0;
}