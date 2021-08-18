#include "JP-RM-LM.h"

/**
 *main - jwdfaoiwijfdoiajdsf
 *@argc: oaiwdjfailsdjfpoiafj
 *@arv: dmcówc´poc´paocó
 *Return: peiorjwpoifmomoicw
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	char *strinput = NULL;
	char *token = NULL;
	char **storetoken = NULL;
	char *cmdinpath = NULL;
	char *delim = "\n ";
	char prompt[] = "($) ";
	int readnum, i = 0;
	int errnum = 0;
        int size = 0;
	int count = 0;
	int CDvalue = 0;
	int  cerrnum = 0;
	size_t len = 0;
	pid_t childpid;
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

		childpid = fork();

		if (childpid == -1)
			__exit(errnum, storetoken, strinput, head, cmdinpath, predirect.jeje);

		if (childpid == 0)
		{

			if (checkenv(storetoken))
				__exit(errnum, storetoken, strinput, head, cmdinpath, predirect.jeje);
			cerrnum = checkexit(storetoken);
			if (cerrnum != -1)
				__exit(cerrnum, storetoken, strinput, head, cmdinpath, predirect.jeje);

			execve(storetoken[0], storetoken, environ);
			cmdinpath = findcommand(head, storetoken[0]);
			execve(cmdinpath, storetoken, environ);
			if (!predirect.cde)
				errmessage(storetoken, argv[0], count);
			errnum = 0;
			__exit(errnum, storetoken, strinput, head, cmdinpath, predirect.jeje);
		}
		else
		{
			wait(NULL);
			cerrnum = checkexit(storetoken);
			if (cerrnum != -1)
				__exit(cerrnum, storetoken, strinput, head, cmdinpath, predirect.jeje);

		}
		if (storetoken)
			free(storetoken);
	}
	return (0);
}
