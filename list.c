#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


extern people *head;
extern int number;

void list(int number)
{
	int i;

	for (i = 0; i < number; i++){
			printf("%d.  %s %s \n " , (i+1), head[i].name, head[i].lastname);
			printf("	%s\n", head[i].phone);
			printf("\n");
			}

}

