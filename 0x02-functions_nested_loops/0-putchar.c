#include <stdio.h>

#include "main.h"

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
	_putchar("%s\n", ch);

	return (0);
}
