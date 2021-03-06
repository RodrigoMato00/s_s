#include "JP-RM-LM.h"

/**
 *exec_handler - 
 *@storetoken:
 *@predirect:
 *@cmdinpath:
 *@strinput:
 *head:
 */
void exec_handler(char  **storetoken,  CHDIRECT predirect, char *cmdinpath, char *strinput,  PDIRECT *head)
{
	pid_t childpid;
	int errnum = 0, cerrnum = 0;

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
		}
}
