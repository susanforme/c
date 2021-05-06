#include <stdio.h>
#define ROW 3
#define COLUMN 4

void sum_rows(int ar[][COLUMN], int rows)
{
  int total = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < COLUMN; j++)
    {
      total += ar[i][j];
    }
    printf("第%d行的和为%d.\n", i + 1, total);
    total = 0;
  }
}
void sum_column(int (*ar)[COLUMN], int rows)
{
  int total = 0;
  for (int i = 0; i < COLUMN; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      total += ar[j][i];
    }
    printf("第%d列的和为%d.\n", i + 1, total);
    total = 0;
  }
}
int main(void)
{
  int junk[ROW][COLUMN] = {
      {2, 4, 6, 8},
      {3, 5, 7, 9},
      {12, 10, 8, 6}};
  sum_rows(junk, ROW);
  sum_column(junk, ROW);
  return 0;
}