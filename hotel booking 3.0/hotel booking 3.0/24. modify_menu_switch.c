#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void modify_menu_display();
void s_modify();
void d_modify();
void su_modify();

// MODIFY MENU FUNCTION
void modify_menu_switch()
{
	int ch;
	modify_menu_display();
	fflush(stderr);
	printf("                                                    : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: s_modify();
		break;
	case 2: d_modify();
		break;
	case 3: su_modify();
		break;
	default: modify_menu_switch();
		break;
	}
}