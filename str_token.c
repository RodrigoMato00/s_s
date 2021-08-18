#include "JP-RM-LM.h"

/**
 *str_token - tokenizes a string
 *@jeje: string a tokenizar
 *@d: deliminator a sstring
 *Return: token or 0
 */
char *_str_token(char *jeje, char *d)
{
	static int jejepoint;
	int a = 0, b = 0;
	static int large;
	static char *cpy;

	if (jeje != NULL)
	{
		large = str_len(jeje);
		while (jeje[a] != '\0')
		{
			for (b = 0; d[b] != '\0'; b++)
			{
				if (jeje[a] == d[b])
					jeje[a] = '\0';
			}
			a++;
		}
		a = 0;
		while (jeje[a] == '\0' && a < large)
			a++;

		jejepoint = a;

		if (jeje[a] != '\0')
		{
			cpy = jeje;
			return (jeje + a);
		}
		return (NULL);
	}
	else
	{
		a = jejepoint;
		jeje = cpy;
		while (jeje[a] != '\0' && a < large)
			a++;
		while (jeje[a] == '\0' && a < large)
			a++;
		jejepoint = a;
		if (jeje[a] != '\0')
			return (jeje + a);
		return (NULL);
	}
}
