#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int no, i, count = 0;
    float sq = 0;
    float j1 = 0.0001, i1;
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
        for (i1 = 0; i1 < no; i1 = i1 + j1)
        {
            if ((i1 * i1) > no)
                break;
        }
        sq = i1 - j1;
        printf("%.2f", sq);
    }
    else
        printf("%.2f", sq);
    return 0;
}