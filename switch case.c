#include<stdio.h>
int main()
{
printf("pick an item:\n1.pasta Rs239 \n2.pizza Rs177 \n3.burger Rs200\n4.shawawrma Rs360");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("you picked pasta");
break;
case 2:
printf("you picked pizza");
break;
case 3:
printf("you picked burger");
break;
case 4:
printf("you picked shawarma");
break;
default:
printf("invalid choice");
}
return 0;
}