#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}