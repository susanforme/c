#include <stdio.h>

int main(void)
{
  int n = 0;
  size_t intsize;
  intsize = sizeof(n);
  printf("%d type is %zd", n, intsize);
  return 0;
}