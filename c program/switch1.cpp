#include<stdio.h>  
#include<conio.h>  
int main(){  
int number=0;  
  printf("enter a number:");  
scanf("%d",&number);  
  
switch(number){  
case 1:  
printf("number is equals to 10");  
break;  
case 5:  
printf("number is equal to 50");  
break;  
case 9:  
printf("number is equal to 100");  
break;  
default:  
printf("number is not equal to 10, 50 or 100");  
}  
}
