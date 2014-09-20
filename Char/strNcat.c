#include <stdio.h>

/**
 * [strNcat description:将字符串from 中至多count个字符连接到字符串to中，追加空值结束符。返回处理完成的字符串。]
 * @param  dest: The string to be appended to
 * @param  src: The string to append to it
 * @param  count: The maximum numbers of bytes to copy
 * @return
 * Note that in contrast to strncpy(), strncat() ensures the reasult is terminated.
 */
char *strNcat(char *dest, const char *src, size_t count)
{
	char *tmp = dest;
	if(count)
	{
		while(*tmp)
			tmp++;
		while((*tmp++ = *src++) != '\0')
		{
			if(--count == 0)
			{
				*tmp = '\0';
				break;
			}
		}
	}
	return dest;
}