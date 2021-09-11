#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void records_menu_display();
void sd_records();
void de_records();
void su_records();

// RECORDS MENU FUNCTION
void records_menu_switch()
{
	int ch;
	records_menu_display();
	fflush(stderr);
	printf("                                                 : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: sd_records();
		break;
	case 2: de_records();
		break;
	case 3: su_records();
		break;
	default: records_menu_switch();
		break;
	}
}