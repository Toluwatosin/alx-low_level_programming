/*
 * File: 1-init_dog.c
 * Auth: Owoyemi Idris
 */

#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: structure member
 * @name: first member
 * @age: second float member
 * @owner: third char mem
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
