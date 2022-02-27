#include <stdio.h>

int main(void)
{
  char testChar;
  // 可以这样做，但这不是好的编程习惯,如果系统不能识别ascii吗则会错误
  char grade = 97;
  testChar = 'a';
  // testChar = "a"; 错误，双引号为字符串,%c表示待打印字符
  printf("%c，%c，%d", testChar, grade, grade == testChar);
  return 0;
}