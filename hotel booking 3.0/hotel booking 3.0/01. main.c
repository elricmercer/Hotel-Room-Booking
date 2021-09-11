#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void start();
void WELCOME();

// MAIN FUNCTION
int main()
{
	int i, begin = 1;
	system("COLOR F4");
	WELCOME();
	printf("                                                                           --------------------------------\n");
	printf("                                                                                 press 1 to continue\n");
	printf("                                                                           --------------------------------\n");
	fflush(stderr);
	printf("                                                                           : ");
	scanf("%d", &i);
	switch (i)
	{
	case 1: while (begin){ start(); }
			break;
	default: printf("ERROR\n");
	}
	return 0;
}