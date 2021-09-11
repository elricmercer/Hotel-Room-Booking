#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void admin_menu_display();
void s_p_room_details();
void booking();
void cancel();
void modify();
void records();
void s_records();
void stop();

// ADMIN MENU FUNCTION
void admin_menu_switch()
{
	int ch;
	admin_menu_display();
	fflush(stderr);
	printf("                               : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: booking();
		break;
	case 2: cancel();
		break;
	case 3: modify();
		break;
	case 4: s_p_room_details();
		break;
	case 5: records();
		break;
	case 6: s_records();
		break;
	case 7: cancel_view_switch();
		break;
	case 8: stop();
		break;
	default: admin_menu_switch();
	}
}