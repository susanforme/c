// 编写一个函数,如果第二个字符串包含在第一个中,则返回第一个字符串包含第二个字符串开始的位置,否则返回空指针
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