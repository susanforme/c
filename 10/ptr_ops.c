#include <stdio.h>

int main(void)
{
  int urn[5] = {22, 11, 20, 14, 23};
  int *ptr1, *ptr2, *ptr3;
  ptr1 = urn;
  ptr2 = &urn[2];
  ptr3 = ptr1 + 4;
  // 指针的值，解引用指针，指针的地址
  printf("ptr1=%p,  *ptr1=%d,    &ptr1=%p.\n\n", ptr1, *ptr1, &ptr1);
  printf("ptr1+4=%p,*(ptr1+4)=%d.\n\n", ptr1 + 4, *(ptr1 + 4));
  ptr1++;
  printf("ptr1=%p,  *ptr1=%d,    &ptr1=%p.\n\n", ptr1, *ptr1, &ptr1);
  ptr2--;
  printf("ptr2=%p,  *ptr2=%d,    &ptr2=%p.\n\n", ptr2, *ptr2, &ptr2);
  --ptr1, ++ptr2;
  printf("ptr1=%p, ptr2=%p.ptr2-ptr1=%d.\n\n", ptr1, ptr2, ptr2 - ptr1);
  printf("ptr3=%p, ptr3-2=%p.\n\n", ptr3, ptr3 - 2);
  return 0;
}
