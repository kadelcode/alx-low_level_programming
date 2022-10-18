#include <stdio.h>
/**
* main - prints out the first 50 fib numbers
* Return: return 0
*/

int main(void)
{
	int i;
	unsigned long u1 = 0, u2 = 1, u3;

	for (i = 0; i < 50; i++)
	{
		u3 = u1 + u2;
		printf("%lu", u3);
		u1 = u2;
		u2 = u3;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
