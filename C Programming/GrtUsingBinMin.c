#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a - b > 0 && a - c > 0)
        printf("A is Greater");
    else if (b - c > 0)
        printf("B is Greater");
    else
        printf("C is Greater");
    return 0;
}