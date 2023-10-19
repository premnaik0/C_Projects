#include <stdio.h>
void main ()
{
char o;
int n1,n2,ans;

printf("Please select a operator from the following\n Enter 1 for Addition +\n Enter 2 for Subtraction -\n Enter 3 for Multiplication *\n Enter 4 for Division /\n ");
scanf("%d",&o);

printf("Please enter no.1 \n");
scanf("%d",&n1);

printf("Please enter no.2 \n");
scanf("%d",&n2);

switch(o)
{
case 1: ans=n1+n2;
printf("%d",ans);
break;
case 2: ans=n1-n2;
printf("%d",ans);
break;
case 3:ans=n1*n2;
printf("%d",ans);
break;
case 4:ans=n1/n2;
printf("%d",ans);
default: printf("Please enter a valid Number or Operator");
}
}
