#include <stdio.h>
#define PERIOD '.'

int main(void)
{
  char ch;
  int char_count = 0;
  while ((ch = getchar()) != PERIOD)
  {
    char_count++;
  }
  printf("这句话有%d个字符.\n", char_count);
  return 0;
}