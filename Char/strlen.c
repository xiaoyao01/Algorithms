#include <stdio.h>

/**
 * [strLen description: 函数返回字符串str 的长度( 即空值结束符之前字符数目)。]
 * @param  str
 * @return
 */
size_t strLen(const char *str)
{
	const char *s = str;
	while(*s != '\0')
		s++;
	return s - str;
}