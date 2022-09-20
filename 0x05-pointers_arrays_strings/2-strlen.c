#include "main.h"

/**
 * _strlen - Gives the length of the string
 * @s: string lenght to get
 * Return: returns string length as interger
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
