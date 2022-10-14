#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	/* variable definition */
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');

	return (0);
}
