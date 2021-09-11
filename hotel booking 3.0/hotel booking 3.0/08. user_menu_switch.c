#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void user_menu_display();
void booking();
void cancel();
void modify();
void stop();
void s_p_room_details();

// USER MENU FUNCTION
void user_menu_switch()
{
	int ch, carry = 1;
	while (carry)
	{
		user_menu_display();
		fflush(stdin);
		printf("                           : ");
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
		case 5: stop();
			break;
		default: user_menu_switch();
			break;
		}
	}
}