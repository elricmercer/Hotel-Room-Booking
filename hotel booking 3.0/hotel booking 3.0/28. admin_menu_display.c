#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

// ADMIN MENU DISPLAY FUNCTION
void admin_menu_display()
{
	system("cls");
	printf("                                  ********************************************\n");
	printf("                                   *****                                *****\n");
	printf("                                    ****            ADMIN MENU          ****\n");
	printf("                                   *****                                *****\n");
	printf("                                  ********************************************\n\n\n");
	printf("                               * * * * * * * * * * 1. BOOKING * * * * * * * * * *\n\n");
	printf("                               * * * * * * * * * * 2. CANCELLATION * * * * * * * *\n\n");
	printf("                               * * * * * * * * * * 3. MODIFY * * * * * * * * * * *\n\n");
	printf("                               * * * * * * * * * * 4. ROOM DETAILS * * * * * * * *\n\n");
	printf("                               * * * * * * * * * * 5. VIEW CUSTOMER RECORD * * * *\n\n");
	printf("                               * * * * * * * * * * 6. SEARCH CUSTOMER RECORD * * *\n\n");
	printf("                               * * * * * * * * * * 7. SEARCH CANCEL RECORD * * * *\n\n");
	printf("                               * * * * * * * * * * 8. EXIT * * * * * * * * * * * *\n\n");
}