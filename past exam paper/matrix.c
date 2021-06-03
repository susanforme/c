#include <stdio.h>
#define LEN 3

void multiply_matrix(int (*A)[LEN], int (*B)[LEN], int (*result)[LEN])
{
  for (int i = 0; i < LEN; i++)
  {
    for (int j = 0; j < LEN; j++)
    {
      int res = 0;
      for (int k = 0; k < LEN; k++)
      {
        res += A[i][k] * B[k][j];
      }
      result[i][j] = res;
    }
  }
}
void show_arr(int arr[][LEN])
{
  for (int i = 0; i < LEN; i++)
  {
    for (int j = 0; j < LEN; j++)
    {
      printf("第%d行,第%d列,值为%d.\n", i, j, arr[i][j]);
    }
  }
}
int main(void)
{
  int A[LEN][LEN] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int B[LEN][LEN] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int C[LEN][LEN] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int result1[LEN][LEN];
  int result2[LEN][LEN];
  multiply_matrix(A, B, result1);
  multiply_matrix(result1, C, result2);
  show_arr(result2);
}