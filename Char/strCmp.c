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
	if(*a == '\0' && *b == '\0')
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
	char aa[] = "abc";
	char bb[] = "ab";
	char *aaa = NULL;
	int i = strCmp(aaa, a);
	
	printf("abc to abcd is %d\n", strCmp(a, b));
	printf("abc to ab is %d\n", strCmp(a, bb));
	printf("abc to abc is %d\n", strCmp(a, aa));
	
	//printf("null to abc is %d, and the error flag is %d\n", strCmp(aaa, a), flag); //printf函数从右边开始解析参数
	printf("null to abc is %d, and the error flag is %d\n", i, flag);
	return 0;
}