#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -  A new type struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: A "dog" struct that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
