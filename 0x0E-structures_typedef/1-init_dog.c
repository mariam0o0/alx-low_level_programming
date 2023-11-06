#include <stddef.h>
#include "dog.h"
/**
  * init_dog -  initialize a variable of type struct dog
  * @d: the struct name
  * @name: name of the dog
  * @age: age of dthe dog
  * @owner: name of owner of the dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
