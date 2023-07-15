#include <stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of single-digit numbers
 *  Numbers must be separated by ,, followed by a space
 *  Numbers should be printed in ascending order
 *  Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
