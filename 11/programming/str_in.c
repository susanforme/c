#include <stdio.h>
#include <string.h>

const char *str_in(const char *str1, const char *str2)
{
  int i = 0, r = 0;
  while (str1[i] != '\0')
  {
    if (str2[0] == str1[i])
    {
      for (int j = i; j < strlen(str2); j++)
      {
        if (str2[j - i] != str1[j])
        {
          r = 0;
          break;
        }
        r++;
      }
      if (r)
      {
        return &str1[i];
      }
    }
    i++;
  }
  return NULL;
}

int main(void)
{
  const char *a = "hats";
  const char *b = "at";
  printf("%c......", *str_in(a, b));
  return 0;
}