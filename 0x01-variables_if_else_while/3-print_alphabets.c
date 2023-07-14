#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 98)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
