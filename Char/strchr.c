#include <stdio.h>
/**
 * [strChr description: 函数返回一个指向str 中ch 首次出现的位置，当没有在str 中找ch到返回NULL。]
 * @param  s
 * @param  c
 * @return
 */
char *strChr(const char *s, int c)
{
	if(s == NULL)
		return NULL;
	while(*s != '\0' && *s != s)
		s++;
	if(*s != '\0')
		return (char *)s;
	else
		return NULL;
}