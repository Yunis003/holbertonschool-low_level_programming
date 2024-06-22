#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the single digit numbers of base 10,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
