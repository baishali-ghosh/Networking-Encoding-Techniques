//@author: Baishali Ghosh
//@email: baishali13@gmail.com
#include<stdio.h>
#include<windows.h>
//Declarations
void gotoxy(short x, short y);
//TODO:Take input from user. Hardcoding for testing purposes.
//TODO: Enable constraints to ensure only 0's and 1's 
//TODO: Remove intermediate lines between continuous zeros and 1's
int arr[]= {1,0,0,1,0,1,1,1};
int i,j=0, n=8, a;
int main()
{
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			gotoxy(j,0);
			printf(" ____");	
			gotoxy(j,1);
			printf("|    |");
			gotoxy(j,2);
			printf("|    |");
			j+=5;
		}
		else if(arr[i]==0)
		{	
			gotoxy(j,3);
			//printf("%d", j);
			printf("|    |");	
			gotoxy(j,4);
			printf("|    |");
			gotoxy(j,5);
			printf(" ____");
			j+=5;	
		}
		
	}
	scanf("%d", &a);
return 0;
}



void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
