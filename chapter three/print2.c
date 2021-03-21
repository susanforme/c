#include <stdio.h>

int main(void)
{
  const unsigned int un = 3000000000;
  const short end = 200;
  const long big = 65537;
  const long long vertBig = 12345678908462;
  printf("un = %u and not %d\n", un, un);
  return 0;
}