#include <stdio.h>
/*
 * strnlen - Find the length of a length-limited string
 * @s: The string to be sized
 * @count: The maximum number of bytes to search
 */
size_t strnlen(const char *s, size_t count)
{
	const char *sc;
	for(sc = s; count-- && *sc != '\0'; ++sc);
	return sc - s;
}