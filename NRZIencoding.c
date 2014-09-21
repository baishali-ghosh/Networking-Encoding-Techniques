//@author: Baishali Ghosh
//@email: baishali13@gmail.com
#include<stdio.h>
#include<windows.h>
//Declarations
#define FLUSH fflush(stdin);
void gotoxy(short x, short y);
//TODO: Enable constraints to ensure only 0's and 1's 
//TODO: Remove intermediate lines between continuous zeros and 1's
int i,j=0, n, a;
int main()
{
	printf("Enter the number of bits: ");
	scanf("%d", &n);	
	int arr[n];
	printf("Enter the bit stream: ");
	FLUSH
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	system("cls");	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			gotoxy(j,0);
			printf(" ____");	
			gotoxy(j,1);
			printf("|    |");
			gotoxy(j,2);
			printf("|    |");
			j+=5;
		}
		else if(arr[i]==1)
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
