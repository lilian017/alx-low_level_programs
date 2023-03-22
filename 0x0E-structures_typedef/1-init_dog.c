#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * struct dog: variable type 
 * @*d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner:pointer to the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
