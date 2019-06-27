#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern people *head;
extern int number;

void add(int number)
{

	if (number > 1){								//выделение памяти
			head = realloc(head,(number) * sizeof(people));
	} else if (number == 1) {
			head = malloc(sizeof(people));
	} else {
			printf("возникла ошибка.\n");
			exit (0);
	}

	printf("введите имя: ");							//считывание данных
	scanf("%s", head[number-1].name);
	printf("введите фамилию: ");
	scanf("%s", head[number-1].lastname);
	printf("введите телефон: ");
	scanf("%s", head[number-1].phone);



	if((head[number-1].name != 0) && (head[number-1].lastname != 0) && (head[number-1].phone !=0)) {printf("контакт успешно добавлен!\n");}
	else {printf("возникла ошибка, перепроверьте данные.\n");}

	printf("\n");
}

