#include <stdio.h>

int strCpy(char *dst ,char *src)
{
	if (dst == NULL || src == NULL)
		return -1;
	while(*src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = *src;
	return 0;
}

int main()
{
	char a[50];
	char b[12] = "hello world";
	char *aa = NULL;
	char *bb = NULL;
	strCpy(a, b);
	printf("copy hello world: %s\n", a);
	printf("copy dst is NULL and the result is %d\n", strCpy(aa, b));
	printf("copy src is NULL and the result is %d\n", strCpy(a, bb));
	return 0;
}