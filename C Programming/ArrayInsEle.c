#include <stdio.h>
int main()
{
    int arr[20], n, ele, pos, i;
    printf("Enter the no. ele:");
    scanf("%d", &n);
    printf("Enter the ele:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the ele and pos to be inserted:");
    scanf("%d %d", &ele, &pos);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}