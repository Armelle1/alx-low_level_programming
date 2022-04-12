#ifndef dog
/**
 * struct dog - information about dog's owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: for each owner, we have he name, age and owner
 */
struct dog
{
	char *name;
	char *owner;

	float age;
};
#endif

#ifndef init_dog
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef print_dog
void print_dog(struct dog *d);
#endif
