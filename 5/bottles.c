#include <stdio.h>
#define MAX 100
int main(void)
{
  int count = MAX + 1;
  while (--count > 0)
  {
    printf("%d Lorem ipsum dolor sit amet consectetur adipisicing elit.", count);
    printf("%d Eius sit nam illum error aut quam sint nulla similique saepe rerum dolores ex,", count);
    printf("%d minima natus quos nemo ut repellat, illo vero?\n", count);
  }
  return 0;
}