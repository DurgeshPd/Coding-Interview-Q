#include <stdio.h>
int number(int val)
{
   if (val <= 100)
   {
      printf("%d ", val);
      number(val + 1);
   }
}
int main()
{
   int val = 1;
   number(val);
   return 0;
}