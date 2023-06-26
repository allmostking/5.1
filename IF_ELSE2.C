#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter value of a=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Your value is neutral");
	}
	else if (a==0)
	{
		printf("Value is not neutral ");
	}
	else
	{
		printf("Value is not neutral");
	}
	getch();
}

