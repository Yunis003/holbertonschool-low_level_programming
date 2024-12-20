#include <stdlib.h>
/**
 * create_array - Creates an array of characters and initializes each element
 *                with a specific character.
 * @size: Size of the array to create.
 * @c: Character to initialize each element with.
 *
 * Return: Pointer to the allocated array, or NULL if size is 0 or on failure.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		array[i] = c;
	}
	return (array);
}
