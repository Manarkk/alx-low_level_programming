#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: Always 0
 *
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	putchar(alphabet);
}
putchar('\n');

return (0);
}
