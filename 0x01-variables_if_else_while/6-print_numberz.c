#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: single numbers in base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	for (num = 48; num < 58; ++num)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
