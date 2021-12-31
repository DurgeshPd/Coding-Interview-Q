#include <stdio.h>
int main()
{
    int n, temp, sum = 0, r, rev = 0;
    scanf("%d", &n); //1729
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    temp = sum;
    while (temp > 0)
    {
        r = temp % 10;
        rev = (rev * 10) + r;
        temp = temp / 10;
    }
    if (sum * rev == n)
        printf("Magic Number");
    else
        printf("Not a Magic Number");
    return 0;
}