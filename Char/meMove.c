#include <stdio.h>

/**
 * meMove -Copy one aera of memory to another
 * @dest: Where to copy to
 * @src: Where to copy from
 * @count: The size of the aera.
 * Unlike memcpy(), memove() copies with overlapping aeras.
 */

void *meMove(void *dest, const void *src, size_t count)
{
	char *tmp;
	const char *s;

	if(dest <= src)
	{
		tmp = dest;
		s = src;
		while(count --)
		{
			*tmp++ = *s++;
		}
	}
	else
	{
		tmp = dest;
		tmp += count;
		s = src;
		s += count;
		while(count--)
			*--tmp = *--s;
	}
	return dest;
}

int main()
{
	int a[12];
	int i;
	for(i = 0; i < 12; i++)
		a[i] = i + 1;
	printf("Source data: ");
	for(i = 0; i < 12; i++)
		printf("%d ", a[i]);
	printf("\n");
	meMove(a, a + 2, 5 * sizeof(int));
	printf("After copied: ");
	for(i = 0; i < 12; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;

}