#include <stdio.h>
int main()
{
    int n = 30;
    for (int i = 2; i < n; i = i + 8)
    {
        printf("%d ", i);
    }
    return 0;
}