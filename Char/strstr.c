#include <stdio.h>

/**
 * [strstr description: 函数返回一个指针，它指向字符串str2 首次出现于字符串str1中的位置，如果没有找到，返回NULL。]
 * @param  s1
 * @param  s2
 * @return
 */
char *strstr(const char *s1, const char *s2)
{
	int l1, l2;
	l2 = strlen(s2);
	if(!l2)
		return (char *)s1;
	l1 = strlen(s1);
	while(l1 >= l2)
	{
		l1--;
		if(!memcmp(s1, s2, l2))
			return (char *)s1;
		s1++;
	}
	return NULL;
}