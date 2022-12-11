#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void){
	char x;
	for(x = 'a'; x <= 'z';){
		putchar (x);
		x++;
		putchar ("\n");
	}

	return (0);
}
