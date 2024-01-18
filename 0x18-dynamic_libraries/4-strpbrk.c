#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[k] == accept[l])
	return (s + k);
	}
	}
	return (0);
}
