#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void login_regis_switch();

// EXIT FUNCTION
void stop()
{
	int ch;
	system("cls");
	printf("                                  ********************************************\n");
	printf("                                   *****                                *****\n");
	printf("                                    ****             EXIT MENU          ****\n");
	printf("                                   *****                                *****\n");
	printf("                                  ********************************************\n\n\n");
	printf("                                                    THANK YOU\n\n\n");
	printf("                                                                      press 1 to end or press 2 to return\n\n");
	printf("                                                                      : ");
	fflush(stderr);
	scanf("%d", &ch);
	switch (ch)
	{
	case 1: exit(0);
		break;
	case 2: login_regis_switch();
		break;
	default: login_regis_switch();
		break;
	}
}