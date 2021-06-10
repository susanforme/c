#include <stdio.h>
#define LEN 20

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
  struct guy fellow =
      {
          {"RAN", "ZHI"},
          "Tomato",
          "programmer",
          23000};
  printf("Dear %s,\n\n", fellow.handle.first);
  printf("%s%s.\n", msgs[0], fellow.handle.first);
  printf("%s%s\n", msgs[1], fellow.job);
  printf("%s\n", msgs[2]);
  printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
  if (fellow.income > 15000)
  {
    puts("!!");
  }
  else if (fellow.income > 8000)
  {
    puts("!");
  }
  else
  {
    puts(".....");
  }
  puts("see you la la ");
  return 0;
}