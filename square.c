#include <stdio.h>

int square(int number)
{
  return number * number;
}

int main(void)
{
  int num = 4;
  printf("Square of number %d is %d\n", num, square(num));
}
