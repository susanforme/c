#include <stdio.h>
#include "hotel.h"

int main(void)
{
  int code, nights;
  double price_rate;
  while ((code = menu()) != QUIT)
  {
    switch (code)
    {
    case 1:
      price_rate = HOTEL1;
      break;
    case 2:
      price_rate = HOTEL2;
      break;
    case 3:
      price_rate = HOTEl3;
      break;
    case 4:
      price_rate = HOTEL4;
      break;
    default:
      printf("Error!!!!!\n");
      break;
    }
    nights = getNights();
    showPrice(price_rate, nights);
  }
  printf("拜拜.");
  return 0;
}