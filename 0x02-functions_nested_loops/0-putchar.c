#include <stdio.h>

#include <errno.h>

#include <string.h>

/**
 * main- Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[9];

	strcpy(ch, "_putchar");
	printf("%s\n", ch);

	return (0);
}
