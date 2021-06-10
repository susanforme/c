#include <stdio.h>
#define LEN 45

const char *msgs[5] = {"Thank you for the wonderful evening, ", "you certainly prove that a ", "is a specia kind of guy,We must get together", "over delicious ", " and have a few laughs"};
struct names
{
  char first[LEN];
  char last[LEN];
};
struct guy
{
  struct names handle;
  char favfood[LEN];
  char job[LEN];
  float income;
};
int main(void)
{
  struct guy fellow[2] =
      {
          {{"RAN", "ZHI"},
           "Tomato",
           "programmer",
           23000},
          {{"Tom", "Ren"},
           "Apple",
           "javascript-programmer",
           15000},
      };
  struct guy *him;
  printf("地址#1:%p #2:%p\n", &fellow[0], &fellow[1]);
  him = &fellow[0];
  printf("指针 #1:%p #2: %p\n", him, him + 1);
  printf("him -> 收入是$%.2f:(*him).income 是$%.2f\n", him->income, (*him).income);
  him++;
  printf("him -> 最喜欢吃的是是%s, 他的名字是%s\n\n", him->favfood, him->handle.last);
  puts("see you la la ");
  return 0;
}