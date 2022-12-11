#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: print all except two characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);																				}
			++ch;
		}
			putchar('\n');
			return (0);
}
