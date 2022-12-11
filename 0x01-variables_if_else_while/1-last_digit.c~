#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
*main - Entry point
*
*Description: to print last digit 
*
*Return: Always 0 (Success) 
*/

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int Lastdigit = n % 10;

	if (Lastdigit > 5){
	printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigit);
	}
	else if (Lastdigit == 0){
	printf("Last digit of %d is %d and is 0\n", n, Lastdigit);
	}
	else if (Lastdigit < 6 && Lastdigit != 0){
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigit);
	}

	return (0);
}
