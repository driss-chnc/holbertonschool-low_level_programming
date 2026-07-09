#include <stdio.h>
#include "dog.h"

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

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
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}