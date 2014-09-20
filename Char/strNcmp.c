#include <stdio.h>

/**
 * [strNcmp description:比较字符串str1 和 str2中至多count个字符,
 * 如果参数中任一字符串长度小于count, 那么当比较到第一个空值结束符时，就结束处理]
 * @param  str1
 * @param  str2
 * @param  count
 * @return:  返回值                     解释 
 *        less than 0           str1 is less than str2 
 *        equal to 0            str1 is equal to str2 
 *        greater than 0        str1 is greater than str2 
 */
int strNcmp(const char *str1, const char *str2, size_t count)
{
	char s1, s2;
	while(count)
	{
		s1 = *str1++;
		s2 = *str2++;
		if(s1 != s2)
			return s1 > s2 ? 1 : -1;
		if(!c1 || !c2)
			break;
		count--;
	}
	return 0;
}