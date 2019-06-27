#include <stdio.h>
#include <string.h>

typedef struct person{
			char name [15];
			char lastname [15];
			char phone[20];
			}people;
void quit();
void add(int);
void del();
void list(int);
void search(int);

