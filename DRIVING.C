#include<stdio.h>
#include<conio.h>
void main()
{
	int age;	//variable for getting age Input.
	clrscr();
	printf("\n Enter the Age :");
	scanf("%d",&age);
	if (age>=18)	//Condition for checking valid.
	{
		printf("\n You are allowed for driving.");
	}
	else
	{
		printf("\n You are not allowed for driving ");
	}
	getch();
}
