#include <stdio.h>
/**
*main - prints the sum of even fibonacci
*Return: return 0
*/

int main(void)
{
	unsigned long u1 = 0, u2 = 1, u3 = 0, sum = 0;

	while (u3 <= 4000000)
	{
		u3 = u1 + u2;
		u1 = u2;
		u2 = u3;

		if ((u1 % 2) == 0)
			sum += u1;
	}
	printf("%ld\n", sum);
	return (0);
}
