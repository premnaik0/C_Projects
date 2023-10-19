#include <stdio.h>
void main()
{
int n1,n2,n3,choice;
printf("enter number 1");
scanf("%d",&n1);
printf("enter number 2");
scanf("%d",&n2);
do
{
printf("enter 1: addition\n");
printf("enter 2: subraction\n");
printf("enter 3: multiplication\n");
printf("enter 4: division\n");
printf("enter 5:exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:n3=n1+n2;
printf("%d\n",n3);
break;
case 2:n3=n1-n2;
printf("%d\n",n3);
break;
case 3:n3=n1*n2;
printf("%d\n",n3);
break;
case 4:n3=n1/n2;
printf("%d\n",n3);
break;
case 5:exit(0);
break;
default:printf("invailid");
}
}
while(choice!=5);
}
