#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void room_type_menu();
void standard();
void deluxe();
void suites();

// CHOOSING ROOM TYPE MENU FUNCTION
void room_type()
{
	int ch;
	room_type_menu();
	fflush(stdin);
	printf("                                 : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: standard();
		break;
	case 2: deluxe();
		break;
	case 3: suites();
		break;
	default: room_type();
		break;
	}
}