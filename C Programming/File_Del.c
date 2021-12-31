#include <stdio.h>
#include <stdlib.h>
int main()
{
    int del = remove("C:\\Users\\durge\\Documents\\File.txt");
    if (!del)
        printf("Deleted Successfully");
    else
        printf("Unable to Delete");
    return 0;
}