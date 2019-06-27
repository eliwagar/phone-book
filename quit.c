#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern people *head;

void quit()
{
	free(head);
	printf("спасибо, что пользовались нашим справочником!\n");
	exit(0);
}

