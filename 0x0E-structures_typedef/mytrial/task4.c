#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
   dog_t *new_dog = malloc(sizeof(dog_t));
   if (new_dog == NULL)
       return NULL;

   new_dog->name = malloc(strlen(name) + 1);
   if (new_dog->name == NULL) {
       free(new_dog);
       return NULL;
   }
   strcpy(new_dog->name, name);

   new_dog->age = age;

   new_dog->owner = malloc(strlen(owner) + 1);
   if (new_dog->owner == NULL) {
       free(new_dog->name);
       free(new_dog);
       return NULL;
   }
   strcpy(new_dog->owner, owner);

   return new_dog;
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
