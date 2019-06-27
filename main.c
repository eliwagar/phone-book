#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

people *head = NULL;
int number = 0;

int menu(int c){
	c = 0;
	printf("выберите действие:\n");				//меню
	printf("1. добавить запись в справочник\n");
	printf("2. найти запись\n");
	printf("3. удалить запись\n");
	printf("4. вывести весь список\n");
	printf("5. выход\n");
	scanf("%d", &c);
	return (c);
	}


void main()
{
	int c;
	int choice;
//	int number = 0;

	menu:
	choice = menu(c);

	switch (choice){			//выполняет то, что нужно, и возвращается опять в меню
			case 1: number++;
				add(number);
				goto menu;		//добавить контакт
				break;

			case 2: search(number);
				goto menu;		//поиск по одному из полей структуры
				break;

			case 3:	del();
				number--;
				goto menu;		//удалить контакт
				break;

			case 4: list(number);
				goto menu;		//вывести список контактов
				break;

			case 5: quit();
		//		free();			//выход из программы
				break;
			}
}
