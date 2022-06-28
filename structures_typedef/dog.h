#ifndef DOG
#define DOG
/**
 * struct dog - defines a dog class
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog
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
#endif
