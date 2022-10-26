#include "main.h"
/**
* leet - a function that encodes a string into 1337
* @str: string to encode
* Return: return the encode string
*/

char *leet(char *str)
{
	int i = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (int j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
