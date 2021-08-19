#include "JP-RM-LM.h"

/**
 *main - jwdfaoiwijfdoiajdsf
 *@argc: oaiwdjfailsdjfpoiafj
 *@argv: dmcówc´poc´paocó
 *Return: peiorjwpoifmomoicw
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	char *strinput = NULL, *token = NULL, **storetoken = NULL, *cmdinpath = NULL, *delim = "\n ",  prompt[] = "($) ";
	int readnum, i = 0, errnum = 0, size = 0, count = 0, CDvalue = 0;
	size_t len = 0;
	PDIRECT *head = NULL;
	CHDIRECT predirect;

	predirect.jeje = _strdup(_getenv("HOME"));
	head = linkedpath();
	signal(SIGINT, SIG_IGN);
	while (1)
	{
		storetoken = NULL;

		predirect.cde = 0;
		count++;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 4);
		i = 0;
		readnum = getline(&strinput, &len, stdin);
		if (readnum == -1)
		{
			__exit(errnum, storetoken, strinput, head, cmdinpath, predirect.jeje);
		}
		size = counter(strinput) + 1;

		if (size == 1)
			continue;
		token = _str_token(strinput, delim);

		storetoken = malloc(sizeof(char *) * size);
		storetoken[i++] = token;
		while (token != NULL)
		{
			token = _str_token(NULL, delim);
			storetoken[i++] = token;
		}
		i = 0;
		CDvalue = changedir(storetoken, &predirect);

		if (CDvalue  == -1)
			CDerrmessage(storetoken, argv[0], count);
		exec_handler(storetoken, predirect,  cmdinpath, strinput, head);
		if (storetoken)
			free(storetoken);
	}
	return (0);
}
