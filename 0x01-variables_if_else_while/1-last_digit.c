#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld_n; /* last digit of n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld_n = n % 10;
	/* your code goes there */
	if (ld_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld_n);
	if (ld_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld_n);
	if ((ld_n < 6) && (ld_n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld_n);

	return (0);
}
