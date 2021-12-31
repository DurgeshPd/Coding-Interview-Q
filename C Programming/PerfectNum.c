#include <stdio.h>
int main()
{
  int num, i = 1, sum = 0;
  printf("Enter a number:"); //6,28
  scanf("%d", &num);
  while (i < num)
  {
    if (num % i == 0)
      sum = sum + i;
    i++;
  }
  if (num == sum)
    printf("Perfect Number");
  else
    printf("Not a Perfect Number");
  return 0;
}