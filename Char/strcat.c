#include <stdio.h>

/**
 * [strCat 函数将字符串src 连接到dest的末端，并返回指针dest(Append one %NUL-terminated string to another)]
 * @param  dest:The string to be appended to
 * @param  src: The string to append to it
 * @return: The string dest
 */
char *strCat(char *dest, const char *src)
{
	char *tmp = dest;
	//while(*tmp++ != '\0'); //可能第一位置处就是\0
	while(*tmp)
		tmp++;
	while((*tmp++ = *src++) != '\0');
	return dest;
}