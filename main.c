#include <stdio.h>

int main(void) {
  int min, max, sum;
  printf("最小値と最大値を , で区切って入力して下さい。:");
  scanf("%d , %d" , &min, &max);

  sum = (min + max) * (max - min + 1) / 2;
  printf("%d - %d の合計は %d です。\n", min, max, sum);
  return 0;
}

// int main(void)
// {
//   int juice = 198, milk = 138, money = 1000;
//   double tax = 1.05;
//   money = 1000 - ((juice + (milk * 2)) * tax);
//   printf("%d円\n", (int)money);
// }
