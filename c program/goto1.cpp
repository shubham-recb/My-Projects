#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	ineligible:
		printf("you are not eligible for vote\n");
		printf("enter your age:");
		scanf("%d",&age);
		if(age<18)
		goto ineligible;
		else
		printf("you are eligible to vote");
}
