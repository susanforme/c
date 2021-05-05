#include <ctype.h>

// c和C都是在字母表中的3，以一个字符为参数，如果是字母返回值，否则返回-1
int let(char ch)
{
  int result;
  result = tolower(ch) - 'a' + 1;
  result = result >= 1 && result <= 26 ? result : -1;
  return result;
}
