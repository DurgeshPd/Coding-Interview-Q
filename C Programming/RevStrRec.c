#include <stdio.h>
void reverse(char *);
int main()
{
	char a[20];
	scanf("%[^\n]s", a);
	reverse(a);
	return 0;
}
void reverse(char *str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
}