#include <stdio.h>
int main()
{
    static int data = 1;
    if (data <= 100)
    {
        printf("%d ", data++);
        main();
    }
    return 0;
}