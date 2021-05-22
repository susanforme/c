#include <stdio.h>

static unsigned long int next = 1;

unsigned long rand0(void)
{
  // 伪随机
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
  next = seed;
}
int main(void)
{
  unsigned int seed;
  while (scanf("%ul", &seed) == 1)
  {
    srand1() for (int i = 0; i < 5; i++)
    {
      printf("%d,%ul.\n", i, rand0());
    }
  }
  return 0;
}