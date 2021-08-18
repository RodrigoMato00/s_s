#include "JP-RM-LM.h"

/**
 * changedir - changes directory
 * @p: p user entered commands
 * @predirect: previous directory
 * Return: zdkmadmcp
 */
int changedir(char **p, CHDIRECT *predirect)
{
	char cd[] = "cd";
	char firulete[] = "~";
	char barra[] = "-";
	char *jeje;
	char *temp;

	if (_strcmp(p[0], cd) == 0)
	{

		predirect->cde = 1;
		if (p[1] == NULL ||  _strcmp(p[1], firulete) == 0)
		{

			jeje = _getenv("HOME");
			free(predirect->jeje);
			predirect->jeje = _strdup(_getenv("PWD"));
			chdir(jeje);


		}
		else if (_strcmp(p[1], barra) == 0)
		{
			temp = _strdup(_getenv("PWD"));
			chdir(predirect->jeje);
			write(STDOUT_FILENO, predirect->jeje, str_len(predirect->jeje));
			write(STDOUT_FILENO, "\n", 1);
			free(predirect->jeje);
			predirect->jeje = temp;
		}
		else
		{
			temp = _strdup(_getenv("PWD"));
			if (chdir(p[1]) == -1)
			{
				free(temp);
				return (-1);
			}
			else
			{
				free(predirect->jeje);
				predirect->jeje = temp;

			}
		}
	}
	return (0);
}
