#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, c = 0;
    float ans;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c++;
    }
    if (c == 2)
    {
        ans = pow(num, 0.5);
        printf("%d is a prime number & its sqrt: %f", num, ans);
    }
    else
        printf("Not a Prime number");
    return 0;
}