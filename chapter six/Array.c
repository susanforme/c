#include <stdio.h>
#define SIZE 5

int main(void)
{
  int score[SIZE], sum = 0;
  double average;
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &score[i]);
  }
  for (int i = 0; i < SIZE; i++)
  {
    sum += score[i];
  }
  average = sum / SIZE;
  printf("sum is %d,average is %.2lf", sum, average);
  return 0;
}