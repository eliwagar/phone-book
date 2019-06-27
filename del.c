#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern people *head;
extern int number;
extern int c;		//переменные из функции поиска контакта
extern int val;		//


void del()
{

	int f = 0;
	int len_name = 0;
	int len_lastname = 0;
	int len_phone = 0;

	printf("чтобы удалить контакт, нужно узнать, есть ли он в справочнике.\n");

	search(number);

	if (c == 1)       // если контакт существует и он единственный, то функция его удаляет. оставляет в списке просто пустое место.
	{
		len_name = strlen(head[val].name) - 1;
		for (f = 0; f < len_name; f++)
		{
			head[val].name[f] = 0;
		}

		len_lastname = strlen(head[val].lastname) - 1;
		for (f = 0; f < len_lastname; f++)
		{
			head[val].lastname[f] = 0;
		}

		len_phone = strlen(head[val].phone) - 1;
		for (f = 0; f < len_phone; f++)
		{
			head[val].phone[f] = 0;
		}
	}

	number++;

	printf("контакт успешно удален.\n");
	printf("\n");
}

