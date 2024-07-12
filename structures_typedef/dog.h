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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif /* DOG_H */
