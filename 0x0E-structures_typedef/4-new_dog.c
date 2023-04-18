#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to by source
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL, pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	dog = malloc(sizeof(dog_t));

	i = _strlen(name);
	j = _strlen(owner);
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
