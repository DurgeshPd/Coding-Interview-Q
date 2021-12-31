#include <stdio.h>
#include <stdlib.h>
void main()
{
  int i;
  int *p = (int *)malloc(6);
  *p = 10;
  *(p + 1) = 20;
  *(p + 2) = 30;
  realloc(p, 10);
  *(p + 3) = 40;
  *(p + 4) = 50;
  printf("Element are:");
  for (i = 0; i < 5; i++)
    printf("%d ", *(p + i));
  free(p);
}