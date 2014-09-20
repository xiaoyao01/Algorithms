#include <stdio.h>

int flag = 0;

int strCmp(char *a, char *b)
{
	if (a == NULL || b == NULL)
	{
		flag = 1;
		return -1;
	}
	while(*a != '\0' && *b != '\0')
	{
		if (*a < *b)
			return -1;
		else if(*a > *b)
			return 1;
		else
		{
			a++;
			b++;
		}

	}
	if(*a != '\0' && *b != '\0')
		return 0;
	else if(*a != '\0')
		return 1;
	else
		return -1;

}

int main()
{
	char a[] = "abc";
	char b[] = "abcd";
	int i = strCmp(a, b);
	printf("%d", i);
	return 0;
}