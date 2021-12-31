#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a = 20, b = 10;
    printf("Before Swapping:%d %d \n", a, b);
    swap(&a, &b);
    printf("Reference Concepts:%d %d \n", a, b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swapping:%d %d \n", *x, *y);
}