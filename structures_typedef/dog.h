#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog, a string.
 * @age: The age of the dog, a float.
 * @owner: The owner of the dog, a string.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
