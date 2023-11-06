#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: the parameter name of the dog
  * @age: the parameter age of the dog
  * @owner: the parameter owner of the dog
  * Return: returns pointer to dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *doggy;

	len1 = 0;
	len2 = 0;
	while (name[len1++])
		;
	while (owner[len2++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(len1 * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(len2 * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len2; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
