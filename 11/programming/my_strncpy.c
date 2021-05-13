#include <stdio.h>

char *my_strncpy(char *s1, const char *s2, int n)
{
  for (int i = 0; i < n; i++)
  {
    *(s1 + i) = s2[i];
  }
  return s1;
}

int main(void)
{
  char str[100];
  char str2[100] = "i am chinese.";
  my_strncpy(str, str2, 15);
  puts(str);
  return 0;
}