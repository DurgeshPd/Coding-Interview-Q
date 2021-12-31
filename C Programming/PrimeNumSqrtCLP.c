#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int no, i, count = 0;
    float sq = 0;
    if (argc != 2)
        exit(1);
    no = atoi(argv[1]);
    for (i = 1; i <= no; i++)
    {
        if (no % i == 0)
            count++;
    }
    if (count == 2)
    {
        sq = sqrt(no);
        printf("%.2f", sq);
    }
    else
        printf("%.2f", sq);
    return 0;
}