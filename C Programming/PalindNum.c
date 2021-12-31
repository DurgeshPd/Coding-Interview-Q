#include <stdio.h>
int main()
{
    int n, r, t, s = 0;
    printf("Enter the num:");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        s = (s * 10) + r;
        n = n / 10;
    }
    n = t;
    if (s == n)
        printf("%d is palindrome", n);
    else
        printf("%d is not a palindrome", n);
    return 0;
}