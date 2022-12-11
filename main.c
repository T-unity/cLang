#include <stdio.h>

int sum(void);

int main(void)
{
  sum();
  return 0;
}

int sum(void)
{
  printf( "%d\n", (100 + 100) * 100 );
  return 0;
}
