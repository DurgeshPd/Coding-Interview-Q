#include <stdio.h>
int fact(int);
int main()
{
    int n, r, ncr;
    printf("Enter the value of n and r:");
    scanf("%d %d", &n, &r);
    ncr = fact(n) / (fact(n - r) * fact(r));
    printf("The nCr of %d and %d is %d", n, r, ncr);
    return 0;
}
int fact(int n)
{
    int i = 1;
    while (n != 0)
    {
        i = i * n;
        n--;
    }
    return i;
}