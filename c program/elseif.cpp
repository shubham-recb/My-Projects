#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num==10)
	{
		printf("this number is equal to 10");
	}
	else if(num==50)
	{
		printf("this number is equal to 50");
	}
	else if(num==100)
	{
		printf("this number equal to 100");
	}
	else
	{
		printf("this number not match any number");
	}
}
