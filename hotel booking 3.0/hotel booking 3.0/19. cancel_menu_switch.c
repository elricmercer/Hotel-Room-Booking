#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void cancel_menu_display();
void s_cancel();
void d_cancel();
void su_cancel();

// CANCELLATION MENU FUNCTION
void cancel_menu_switch()
{
	int ch;
	cancel_menu_display();
	fflush(stderr);
	printf("                                        : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: s_cancel();
		break;
	case 2: d_cancel();
		break;
	case 3: su_cancel();
		break;
	default: cancel_menu_switch();
		break;
	}
}