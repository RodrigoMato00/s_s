#include "JP-RM-LM.h"

/**
 *counter - count the namber of tokens
 *@jeje: the string
 *Return: the namber of tokens or 0
 */
int counter(char *jeje)
{
	int tc;
	int a;

	tc = 0;
	a = 0;

	while (jeje[a] == ' ' && jeje[a] != '\0')
		a++;
	if (jeje[a] == '\0' || jeje[a] == '\n')
		return (0);

	while (s[i] != '\0')
	{
		tc++;
		while (jeje[a] != ' ' && jeje[a] != '\0')
			a++;

		while (jeje[a] == ' ' && jeje[a] != '\0')
			a++;


	}
	return (tc);
}
