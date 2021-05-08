#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
  // 含有五个指针的数组
  const char *strs[LIM] = {"hello", "my friend", "how are you", "i am fine", "oh"};
  // 含有五个数组的数组
  char other_strs[LIM][SLEN] = {"walking", "on", "the", "moon", "early"};
  for (int i = 0; i < LIM; i++)
  {
    puts(strs[i]);
    puts(other_strs[i]);
  }

  return 0;
}