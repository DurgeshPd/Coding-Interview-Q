#include <stdio.h>
#include <string.h>
void revword(char str[])
{
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == ' ')

		{
			str[i] = '\0';
			printf("%s ", &str[i] + 1);
		}
	}
	printf("%s ", str);
}
int main()
{
	char str[20];
	gets(str);
	revword(str);
	return 0;
}