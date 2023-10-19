#include <stdio.h>
void main ()
{
int n1,n2,ans,o;

printf("Please enter no.1 \n");
scanf("%d",&n1);

printf("Please enter no.2 \n");
scanf("%d",&n2);
do
{
printf("Please select a operator from the following\n Enter 1 for Addition +\n Enter 2 for Subtraction -\n Enter 3 for Multiplication *\n Enter 4 for Division /\n Enter 5 for exit\n");
scanf("%d",&o);

switch(o)
{
case 1: ans=n1+n2;
printf("%d\n",ans);
break;
case 2: ans=n1-n2;
printf("%d\n",ans);
break;
case 3:ans=n1*n2;
printf("%d\n",ans);
break;
case 4:ans=n1/n2;
printf("%d\n",ans);
break;
case 5:exit(0);
break;
default: printf("Please enter a valid Number or Operator\n");
}
}while (o!=5);
}
