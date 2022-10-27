#include "main.h"
/**
* rot13 - encodes a string using rot13
* @str: the string to be encode
* Return: returns the encoded string
*/

char *rot13(char *str)
{
	int i, j;

	char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', '0', 'P',
	'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e',
	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
	'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char rot13key[] = {'N', '0', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
	'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
	'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (alphabet[j] == str[i])
			{
				str[i] = rot13key[j];
				break;
			}
		}
	}
	return (str);
}
