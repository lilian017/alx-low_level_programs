#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @t*: points to the new dog
 * @name: points to the name of the new dog
 * @age: points to the age of the new dog
 * @owner: points to the owner of the new dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
		dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i=0; name[i]; i++)
		;
	i++;
	dog->name =malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k=0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[i];
	return (dog);
}

