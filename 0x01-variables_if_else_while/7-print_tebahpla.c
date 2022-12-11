#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: lower case in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a';)
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
