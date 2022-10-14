#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	/*declaring variables*/
	char l_alpha;
	char u_alpha;
	/*for loops*/
	for (l_alpha = 'a'; l_alpha <= 'z'; l_alpha++)
		putchar (l_alpha);
	for (u_alpha = 'A'; u_alpha <= 'Z'; u_alpha++)
		putchar (u_alpha);
	putchar('\n');
	return (0);
}
