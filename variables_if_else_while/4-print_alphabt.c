#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z', small != 'q', 'e'; small++)
	{
		putchar(small);
	}
	putchar('\n');

	return (0);
}