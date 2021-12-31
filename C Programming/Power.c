#include <stdio.h>
int main()
{
    int n, p, i;
    long long int val = 1;
    printf("Enter the num and power:");
    scanf("%d %d", &n, &p);
    for (i = 0; i < p; i++)
    {
        val = val * n;
    }
    printf("Power is:%lld", val);
    return 0;
}