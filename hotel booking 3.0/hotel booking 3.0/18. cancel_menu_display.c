#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

// CANCELLATION MENU DISPLAY FUNCTION
void cancel_menu_display()
{
	system("cls");
	printf("                             *********************************************\n");
	printf("                              *****                                 *****\n");
	printf("                               ****            CANCEL MENU          ****\n");
	printf("                              *****                                 *****\n");
	printf("                             *********************************************\n\n\n");
	printf("                 * * * * * * * * * * 1. STANDARD ROOM CANCELLATION * * * * * * * * * *\n\n");
	printf("                 * * * * * * * * * * 2. DELUXE ROOM CANCELLATION * * * * * * * * * * *\n\n");
	printf("                 * * * * * * * * * * 3. SUITE ROOM CANCELLATION * * * * * * * * * * * *\n\n");
}