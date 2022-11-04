#include <stdio.h>
#include <stdlib.h>
/**
* main - minimum number of coins to make change for an amount of money
* @argc: array size
* @argv: array
* Return: if not 1, return error
*/

int main(int argc, char **argv)
{
	int i, coins, amount;

	int num[5] = {25, 10, 5, 2, 1};

	coins = 0;

	amount = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount <= 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (num[i] <= amount)
			{
				coins = coins + (amount / num[i]);
				amount = amount - (amount / num[i]) * num[i];
				if (amount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
