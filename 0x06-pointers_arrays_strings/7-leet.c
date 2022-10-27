#include "main.h"
/**
* leet - a function that encodes a string into 1337
* @str: string to encode
* Return: return the encode string
*/

char *leet(char *str)
{
	int l_count, s_count;

	char leetLets[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	s_count = 0;
	while (str[s_count] != '\0')
	{
		l_count = 0;
		while (l_count < 10)
		{
			if (leetLets[l_count] == str[s_count])
			{
				str[s_count] = leetNums[l_count];
			}
			l_count++;
		}
		s_count++;
	}
	return (str);
}
