#include<stdio.h>
#include<conio.h>
main()
{
	int i,num=0;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i*num);
	}
}
