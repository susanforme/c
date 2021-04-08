#include <stdio.h>

// ANSI prototype声明
void pound(int n);

int main(void)
{
  int times = 5;
  char ch = '!';
  float f = 6.0;
  pound(times);
  pound(ch);
  pound(f);
  printf("%d,%c,%2.2f.\n", times, ch, f);
  return 0;
}

void pound(int n)
{
  while (n--)
  {
    printf("#");
  }
  printf("\n");
}