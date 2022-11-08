#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates all arguments
* @ac: count arg
* @av: vector arg
* Return: pointer of an array of character
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *aout;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	aout = malloc((k + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = l = 0; l < k; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			aout[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < k - 1)
			aout[l] = av[i][j];
	}
	aout[l] = '\0';

	return (aout);
}
