#include <stdio.h>

void *memCpy(void *dest, void *src, size_t count)
{
	char *tmp = (char *) dest; //gcc编译必须要强制类型转换，vs2010可以不需要
	const char *s = (const char *)src;
	while(count--)
	{
		*tmp++ = *s++;
	}
	return dest;
}

int main()
{
	int a[12] = {0};
	int b[12];
	int i;
	for(int i = 0; i < 12; i++)
		b[i] = i + 1;
	memCpy(a, b, sizeof(b));
	printf("After memcpy :");
	for(i = 0; i < 12; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}