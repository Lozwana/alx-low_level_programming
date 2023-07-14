#include <stdio.h>
/**
 * main - Entry point
 *  prints the alphabet in lowercase
 *  all the letters except q and e
 *  Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putcher(n);
		n++;
	}
	putcher('\n');
	return (0);
}
