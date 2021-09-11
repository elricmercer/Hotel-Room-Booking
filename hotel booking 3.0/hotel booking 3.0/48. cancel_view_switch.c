#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void cancel_menu_display();
void s_cancel_view();
void d_cancel_view();
void su_cancel_view();

// CANCELLATION MENU FUNCTION
void cancel_view_switch()
{
	int ch;
	cancel_menu_display();
	fflush(stderr);
	printf("                                        : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: s_cancel_view();
		break;
	case 2: d_cancel_view();
		break;
	case 3: su_cancel_view();
		break;
	default: cancel_view_switch();
		break;
	}
}