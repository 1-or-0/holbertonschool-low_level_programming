#ifndef MYHEADER_H
#define MYHEADER_H
/**
 * struct dog - This structure defines a dog.
 *
 * @name: Pointer to a character string holding the dog's name.
 * @age: Floating point number representing the dog's age.
 * @owner: Pointer to a character string holding the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
