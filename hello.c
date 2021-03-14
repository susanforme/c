# include <stdio.h>

void consoleName(char name[]){
  puts(name);
}

int main(void){
  int num = 3;
  char name[] = "Tom Trump";
  consoleName(name);
  printf("my favorite number is %d",num);
}


