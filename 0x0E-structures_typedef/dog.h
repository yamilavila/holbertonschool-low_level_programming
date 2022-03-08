#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure of the dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize variable of type
 * @d: pointer to struct
 * @name: name of dog
 * @age: dog age
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - print struct
 * @d: pointer
 */
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
