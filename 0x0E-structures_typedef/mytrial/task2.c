#include <stdio.h>
#include "dog.h"
/*
struct dog {
char *name;
float age;
char * owner;
};
*/
void print_dog(struct dog *d)
{

	printf("Name: %s \n", (*d).name);	
	printf("Age: %f \n", (*d).age);
	printf("Owner: %s \n", d -> owner);

}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
