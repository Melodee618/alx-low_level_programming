#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - a structure with three elements char *, float, char *
* @name:stores dog's name when init
* @age: stores dog's age when init
* @owner: stores owner of dog when init
*
* Description: a struct that stores info about a dog when inti.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
