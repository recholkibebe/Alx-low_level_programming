#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *f = haystack;
	char *g = needle;

	while (*f == *g && *g != '\0')
	{
	f++;
	g++;
	}
	if (*g == '\0')
	return (haystack);
	}
	return (0);
}
