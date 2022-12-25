#include <stdio.h>

int sum(int);

int main(void)
{
  int value;
  value = sum(100);
  printf("%d\n", value);
  return 0;
}

int sum(int number)
{
  // printf( "%d\n", (number + number) * number );
  return (number + number) * number;
}
