#include <stdlib.h>
#include <dog.h>

/**
 * dog - struct data type
 * @p: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = sizeof(struct dog);
	d.name = name;
	d.age = age;
	d.owner = owner;
}
