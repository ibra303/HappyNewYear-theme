#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

COORD coord = { 0,0 };
void gotoxy(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
main()
{
	system("COLOR 1");
	gotoxy(4, 2);
	printf("* \t  *");
	gotoxy(4, 3);
	printf("* \t  *");
	gotoxy(4, 4);
	printf("* \t  *");
	gotoxy(4, 5);
	printf("*******");
	gotoxy(4, 6);
	printf("* \t  *");
	gotoxy(4, 7);
	printf("* \t  *");
	gotoxy(4, 8);
	printf("* \t  *");
	gotoxy(19, 2);
	printf("*");
	gotoxy(18, 3);
	printf("* *");
	gotoxy(17, 4);
	printf("*   *");
	gotoxy(16, 5);
	printf("*     *");
	gotoxy(15, 6);
	printf("*********");
	gotoxy(14, 7);
	printf("*         *");
	gotoxy(13, 8);
	printf("*           *");
	gotoxy(28, 2);
	printf("********");
	gotoxy(28, 3);
	printf("*      *");
	gotoxy(28, 4);
	printf("*      *");
	gotoxy(28, 5);
	printf("*      *");
	gotoxy(28, 6);
	printf("********");
	gotoxy(28, 7);
	printf("*");
	gotoxy(28, 8);
	printf("*");
	gotoxy(38, 2);
	printf("********");
	gotoxy(38, 3);
	printf("*      *");
	gotoxy(38, 4);
	printf("*      *");
	gotoxy(38, 5);
	printf("*      *");
	gotoxy(38, 6);
	printf("********");
	gotoxy(38, 7);
	printf("*");
	gotoxy(38, 8);
	printf("*");
	gotoxy(49, 2);
	printf("*     *");
	gotoxy(50, 3);
	printf("*   *");
	gotoxy(51, 4);
	printf("* *");
	gotoxy(52, 5);
	printf("*");
	gotoxy(52, 6);
	printf("*");
	gotoxy(52, 7);
	printf("*");
	gotoxy(52, 8);
	printf("*");
	gotoxy(21, 10);
	printf("**     *");
	gotoxy(21, 11);
	printf("* *    *");
	gotoxy(21, 12);
	printf("*   *  *");
	gotoxy(21, 13);
	printf("*     **");
	gotoxy(21, 14);
	printf("*      *");
	gotoxy(30, 10);
	printf("******");
	gotoxy(30, 11);
	printf("*");
	gotoxy(30, 12);
	printf("******");
	gotoxy(30, 13);
	printf("*");
	gotoxy(30, 14);
	printf("******");
	gotoxy(38, 10);
	printf("*            *");
	gotoxy(39, 11);
	printf("*          *");
	gotoxy(40, 12);
	printf("*    *   *");
	gotoxy(41, 13);
	printf("*   *  *");
	gotoxy(42, 14);
	printf("*  * *");
	gotoxy(43, 15);
	printf("****");
	gotoxy(22, 17);
	printf("*     *");
	gotoxy(23, 18);
	printf("*   *");
	gotoxy(24, 19);
	printf("* *");
	gotoxy(25, 20);
	printf("*");
	gotoxy(25, 21);
	printf("*");
	gotoxy(30, 17);
	printf("******");
	gotoxy(30, 18);
	printf("*");
	gotoxy(30, 19);
	printf("******");
	gotoxy(30, 20);
	printf("*");
	gotoxy(30, 21);
	printf("******");
	gotoxy(40, 17);
	printf(" *");
	gotoxy(40, 18);
	printf("* *");
	gotoxy(39, 19);
	printf("*****");
	gotoxy(38, 20);
	printf("*     *");
	gotoxy(37, 21);
	printf("*       *");
	gotoxy(47, 17);
	printf("*****");
	gotoxy(47, 18);
	printf("*   *");
	gotoxy(47, 19);
	printf("*****");
	gotoxy(47, 20);
	printf("* *");
	gotoxy(47, 21);
	printf("*  *");
	getch();
}

