#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,j=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d %d\n",i,j);
			if(i==2 && j==2)
			{
				break;
			}
		}
	}
}
