#include<stdio.h>
#include<conio.h>
main()
{
		int i=1,num=0;
		printf("enter a number");
		scanf("%d",&num);
		do
		{
			printf("%d\n",i*num);
			i++;
		}
		while(i<=10);
}
