#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

// USER MENU DISPLAY FUNCTION
void user_menu_display()
{
	system("cls");
	printf("                                   ******************************************\n");
	printf("                                    *****                              *****\n");
	printf("                                     ****            MENU              ****\n");
	printf("                                    *****                              *****\n");
	printf("                                   ******************************************\n\n\n");
	printf("                           * * * * * * * * * * 1. BOOKING * * * * * * * * * *\n\n");
	printf("                           * * * * * * * * * * 2. CANCELLATION * * * * * * * *\n\n");
	printf("                           * * * * * * * * * * 3. MODIFY BOOKING * * * * * * *\n\n");
	printf("                           * * * * * * * * * * 4. ROOM DETAILS * * * * * * * *\n\n");
	printf("                           * * * * * * * * * * 5. EXIT * * * * * * * * * * * *\n\n");
}