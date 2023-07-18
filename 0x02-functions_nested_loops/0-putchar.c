#include <main.h>
/**
 * main - Entry point
 *
 * Description: A program that prints _putchar
 *
 * Return : Always 0 (success)
 */
int main(void)
{
char *ch = "_putcher";
while (*ch)
{
_putchar(*ch);
ch++;
}
_putchar('\n');
return (0);
}
