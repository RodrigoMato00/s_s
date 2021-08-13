#ifndef JP_RM_LM_H
#define JP_RM_LM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

/**
 *struct linked - structure for the implementation of Linkedlist (PATH)
 *@a: directory path
 *@next: pointer a next node
 */
typedef struct linked
{
	char * jeje;
	struct linked * next;
} Mystruct;

/**
 *struct cd - structure for function cd
 *@jeje: directory path
 *@cde: indicated to cd calling
 */
typedef structure cd
{
	char *jeje;
	int cde;
} cdstruct;

char *_str_token(char *jeje, char *d);
int str_len(char *jeje);
int counter(char *jeje);

#endif
