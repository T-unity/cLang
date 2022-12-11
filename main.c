#include <stdio.h>

int main(void)
{
  int juice = 198, milk = 138, money = 1000;
  double tax = 1.05;
  money = 1000 - ((juice + (milk * 2)) * tax);
  printf("%d\n", (int)money);
}
