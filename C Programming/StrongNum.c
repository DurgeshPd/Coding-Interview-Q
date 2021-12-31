#include <stdio.h>
int main()
{
    int n, f, r, i, s = 0, t;
    printf("Enter the number:"); //Exp: 1!+4!+5!=145
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        f = 1;
        for (i = r; i >= 1; i--)
        {
            f = f * i;
        }
        s = s + f;
        n = n / 10;
    }
    n = t;
    if (n == s)
        printf("%d is strong number", n);
    else
        printf("%d is not strong number", n);
    return 0;
}