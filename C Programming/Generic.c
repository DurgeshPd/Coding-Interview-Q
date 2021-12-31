#include <stdio.h>
int main()
{
    int n, r, s;
    printf("Enter number:");
    scanf("%d", &n);
    while (n > 10)
    {
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        if (s > 10)
            n = s;
        else
            break;
    }
    printf("%d", s);
    return 0;
}