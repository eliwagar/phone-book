#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern people *head;
extern int number;
int c = 0;		//реализована в функции total. если значение единственно, меняет значение с на 1.
int val = 0;		//если есть совпадение, запоминает значение i(порядковый номер). если контакт единственный и его нужно удалить, с помощью нее
			//функция удаления будет знать, какой номер у нужного контакта.

void total(int count)
{
	printf("\n");

	if (count == 1)
	{
		printf("в нашем справочнике есть контакт с вашей информацией.\n");
		c = 1;
	} else if (count == 0)
		{
			printf("в нашем справочнике нет контакта с вашей информацией.\n");
		} else if (count > 1)
			{
				printf("в нашем справочнике есть несколько контактов с вашей  информацией.\n");
			} else
				{
					printf("что-то пошло не так.попробуйте еще раз.\n");
				}

	printf("\n");
}

void search(int number)
{

	int inf;	//для выбора
	int count = 0;	//счетчик контактов с одинаковыми полями
	int i = 0;
	int j = 0;	//переменные для цикла
	char str[10] = {0};	//строка для поиска
	int len = 0;		//для подсчета совпадений символов

	printf("какую информацию о контакте вы имеете?\n");
	printf("1. имя\n");
	printf("2. фамилию\n");
	printf("3. телефон\n");
	scanf("%d", &inf);

	switch (inf){
			case 1:

			printf("введите имя: ");
			scanf("%s", str);

			for (i = 0; i < number; i++)						//пробегает по каждому значению в массиве
			{
				len = 0;

				for (j = 0; j < (strlen(head[i].name)-1); j++)		//посимвольно сравнивает имя в структуре и заданную строку
				{
						if (str[j] == (head[i].name[j]))
						{
							len++;
						}
				}

				if (len == (strlen(str)-1))	//если есть совпадение имени, выводит весь контакт
				{
					printf("%d. %s %s \n", (i+1), head[i].name, head[i].lastname);
					printf("	%s\n", head[i].phone);
					count++;
					val = i;
				}
			}

			total(count);
			break;


			case 2:

			printf("введите фамилию: ");
			scanf("%s", str);

			for (i = 0; i < number; i++)						//пробегает по каждому значению в массиве
			{
				len = 0;

				for (j = 0; j < (strlen(head[i].lastname)-1); j++)		//посимвольно сравнивает имя в структуре и заданную строку
				{
						if (str[j] == (head[i].lastname[j]))
						{
							len++;
						}
				}

				if (len == (strlen(str)-1))	//если есть совпадение имени, выводит весь контакт
				{
					printf("%d. %s %s \n", (i+1), head[i].name, head[i].lastname);
					printf("	%s\n", head[i].phone);
					count++;
				}
			}

			total(count);
			break;



			case 3:

			printf("введите номер телефона: ");
			scanf("%s", str);

			for (i = 0; i < number; i++)						//пробегает по каждому значению в массиве
			{
				len = 0;

				for (j = 0; j < (strlen(head[i].phone)-1); j++)		//посимвольно сравнивает имя в структуре и заданную строку
				{
						if (str[j] == (head[i].phone[j]))
						{
							len++;
						}
				}

				if (len == (strlen(str)-1))	//если есть совпадение имени, выводит весь контакт
				{
					printf("%d. %s %s \n", (i+1), head[i].name, head[i].lastname);
					printf("	%s\n", head[i].phone);
					count++;
				}
			}

			total(count);
			break;


	}
}

