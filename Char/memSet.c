#include <stdio.h>
//函数拷贝ch 到buffer 从头开始的count 个字符里, 并返回buffer指针
//用途：清空字符数组， 以字节为单位，也可以清空结构体
void *memSet(void *buffer, int c, size_t count)
{
	char *s = buffer;
	while(count--)
	{
		*s++ = c;
	}
	return buffer;
}

int main()
{
	char a[20] = "hello";
	int i;
	printf("array a is %s\n", a);
	memSet(a, 'a', 20);
	printf("array a is ");
	for (i = 0; i < 20; i++)
		printf("%c ", a[i]);
	printf("\n");
	return 0;
}