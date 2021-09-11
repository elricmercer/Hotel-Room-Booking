#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void login_regis_menu_display();
void admin_login();
void stop();
void user_login();
void user_register();

// LOGIN REGISTRATION MENU FUNCTION
void login_regis_switch()
{
	int ch;
	login_regis_menu_display();
	fflush(stdin);
	printf("                       : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: user_login();
		break;
	case 2: user_register();
		break;
	case 3: admin_login();
		break;
	case 4: stop();
		break;
	default: login_regis_switch();
		break;
	}
}