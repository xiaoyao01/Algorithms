#include <stdio.h>

/**
 * strncmpy - 将字符串from 中至多count个字符复制到字符串to中。如果字符串from 的长度小于count，其余部分用'\0'填补。返回处理完成的字符串。
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @count: The maximum number of bytes to copy
 */

char * strNcpy(char *dest, const char * src, size_t count)
{
	char *s = dest;
	while(count--)
	{
		if((*s++ = *src) != '\0')
			src++;
	}
	return dest;
}

int main()
{
	char a[5] = {'a', 'b', 'c', 'd', 'e'};
	char b[3] = "hi";
	int i;
	strNcpy(a, b, 5);
	for(i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}