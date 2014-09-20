#include <stdio.h>

/**
 *memcmp - Compare two areas of memory
 * @cmp1: One are of memory
 * @cmp2: Another area of memory
 * @count: The size of the area. 
 */
int memCmp(const void *cmp1, const void *cmp2, size_t count)
{
	const char *s1 = cmp1;
	const char *s2 = cmp2;
	int i = 0;
	while(count--)
	{
		if((i = *s1++ - *s2++) != 0)  //必须加括号
			break;
	}
	return i;
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {1, 2, 3, 4, 5};
	int c[5] = {1, 2, 4, 5, 3};
	int i;
	printf("Data: \n");
	printf("array a: ");
	for(i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\narray b:");

	for(i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\narray c: ");
	for(i = 0; i < 5; i++)
		printf("%d ", c[i]);
	printf("\n");
	printf("a compare to b: %d\n", memCmp(a, b, sizeof(int) * 5));
	printf("a compare to c: %d\n", memCmp(a, c, sizeof(int) * 5));
	printf("a + 1 compare to b (fist 4 data): %d\n", memCmp(a + 1, b, sizeof(int) * 5) );
	return 0;
}