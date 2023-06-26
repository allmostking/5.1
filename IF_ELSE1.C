#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter your first value=");
	scanf("%d",&a);
	printf("Enter your secound value=");
	scanf("%i",&b);
	if (a<b)
	{
		printf("First is minimum ");
	}
	else
	{
		printf("Secound is minimum");
	}

	getch();
}