#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void s_records_menu_display();
void sd_s_records();
void de_s_records();
void su_s_records();

// SEARCH CUSTOMER RECORD FUNCTION
void s_records_menu_switch()
{
	int ch;
	s_records_menu_display();
	fflush(stderr);
	printf("                                                       : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: sd_s_records();
		break;
	case 2: de_s_records();
		break;
	case 3: su_s_records();
		break;
	default: s_records_menu_switch();
		break;
	}
}