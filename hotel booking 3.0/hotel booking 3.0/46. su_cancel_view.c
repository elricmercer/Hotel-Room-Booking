#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "cancel.h"

void admin_menu_switch();
void login_regis_switch();

// STANDARD ROOM RECORDS FUNCTION
void su_cancel_view()
{
	FILE* fp;
	int menu;
	char can[1000];
	if ((fp = fopen("su_cancellation.txt", "r")) == NULL)
		exit(0);
	system("cls");
	fscanf(fp, "%s", &can);
	printf("%s", can);
	printf("\n");
	fclose(fp);
	printf("\npress 1 to go back to menu\n");
	fflush(stderr);
	scanf("%d", &menu);
	switch (menu)
	{
	case 1: admin_menu_switch();
		break;
	default: login_regis_switch();
		break;
	}

}