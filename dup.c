#include "JP-RM-LM.h"

/**
 *_strdup - duplicate string
 *@s: string a duplicate
 *Return: duplicated string
 */
char *_strdup(char *jeje)
{
	char *d = NULL;
	unsigned int a, length = 0;

	length = str_len(jeje);
	d = malloc(sizeof(char) * length + 1);
	if (!d)
		return (NULL);
	for (a = 0; jeje[a] != '\0'; a++)
	{
		d[a] = jeje[a];
	}
	d[a] = '\0';
	return (d);
}
