#include <stdio.h>
/**
* main - prints the first 98 fibonacci numbers
* Return: Always 0
*/

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long u1, u2, u3, u4;
	unsigned long l1, l2;

	for (i = 0; i < 92; i++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	u1 = n1 / 10000000000;
	u3 = n2 / 10000000000;
	u2 = n1 % 10000000000;
	u4 = n2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		l1 = u1 + u3;
		l2 = u2 + u4;
		if ((u2 + u4) > 9999999999)
		{
			l1 += 1;
			l2 %= 10000000000;
		{
		printf("%lu%lu", l1, l2);
		if (i != 98)
			printf(", ");
		u1 = u3;
		u2 = u4;
		u3 = l1;
		u4 = l2;
	}
	printf("\n");
	return (0);
}
