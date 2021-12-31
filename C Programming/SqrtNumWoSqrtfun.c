#include <stdio.h>
int main()
{
    int num;
    float temp, sqrt;
    scanf("%d", &num);
    sqrt = num / 2;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (num / temp + temp) / 2;
    }
    printf("%f", sqrt);
    return 0;
}