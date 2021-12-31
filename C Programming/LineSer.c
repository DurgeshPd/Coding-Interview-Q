#include <stdio.h>
int main()
{
    int arr[20], i, n, key, flag = 0;
    printf("Enter the no. Ele:");
    scanf("%d", &n);
    printf("Enter the Ele:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the key Ele to search:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element is Found at:%d ", i);
    else
        printf("Ele is not found");
    return 0;
}