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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
