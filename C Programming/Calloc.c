#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i;
	int *p = (int *)calloc(5, 2);
	if (p == NULL)
		printf("Memory is not alloctaed");
	else
	{
		printf("Enter elemenst:");
		for (i = 0; i < 5; i++)
			scanf("%d", p + i);
		printf("Element are:");
		for (i = 0; i < 5; i++)
			printf("%d ", *(p + i));
	}
	free(p);
}