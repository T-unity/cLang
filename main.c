#include <stdio.h>

int main(void)
{
  int juice = 198, milk = 138, money = 1000;
  money = 1000 - (juice + (milk * 2));
  printf("%d\n", money);
}
