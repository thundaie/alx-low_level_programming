#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: print base 16 in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int num;
	char ch;

	for (num = 48; num < 58; ++num)
	{
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ++ch)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
