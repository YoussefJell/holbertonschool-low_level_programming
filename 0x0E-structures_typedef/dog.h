#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - doggy struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Description: This struct has the data of my_dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} DOG;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
