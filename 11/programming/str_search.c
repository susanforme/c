#include <stdio.h>

const char *search(const char *str, char search_str)
{
  int n = 0;
  const char *pt_s;
  while (str[n] != '\0')
  {
    if (str[n] == search_str)
    {
      pt_s = &str[n];
      return pt_s;
    }
    n++;
  }
  return pt_s;
}

int main(void)
{
  const char *str = "i am a big man.";
  printf("%c......", *search(str, 'a'));
  return 0;
}