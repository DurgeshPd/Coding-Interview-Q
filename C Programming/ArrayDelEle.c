#include <stdio.h>
int main()
{
    int arr[20], n, pos, i;
    printf("Enter no.ele:");
    scanf("%d", &n);
    printf("Enter the elems:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position:");
    scanf("%d", &pos);
    for (i = pos; i < n; i++)
        arr[i] = arr[i + 1];
    for (i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
    return 0;
}