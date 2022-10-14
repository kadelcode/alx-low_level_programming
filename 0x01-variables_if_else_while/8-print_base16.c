#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	/* variable declarations */
	int num = 0;
	char alpha = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
