#include <stdio.h>
int main(void)
{
  int dogs;
  printf("how many dogs do you have?\n");
  scanf("%d", &dogs);
  printf("wow !you unexpectly have the %d dogs!\n", dogs);
  return 0;
}