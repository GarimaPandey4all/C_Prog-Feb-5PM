#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10, b = 30;
	clrscr();

	printf("Enter any value for a and b:");
	scanf("%d %d", &a, &b);

	printf("Addition is: %d", (a + b));

	getch();
}