#include <stdio.h>
#include <stdlib.h>
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}
int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}
int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc == 1)
		printf("No command line arguments found.\n");

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", LCM(num1, num2));
	}
	return 0;
}