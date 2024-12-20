#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog or NULL
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i;
	int first;
	int second;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
	{
		return (NULL);
	}
	for (first = 0; name[first] != '\0'; first++)
		;
	(*ptr_dog).name = malloc(first + 1);

	if ((*ptr_dog).name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	for (second = 0; owner[second] != '\0'; second++)
		;
	(*ptr_dog).owner = malloc(second + 1);
	if ((*ptr_dog).owner == NULL)
	{
		free((*ptr_dog).name);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		(*ptr_dog).name[i] = name[i];
	}
	(*ptr_dog).name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		(*ptr_dog).owner[i] = owner[i];
	}
	ptr_dog->owner[i] = '\0';
	ptr_dog->age = age;
	return (ptr_dog);
}
