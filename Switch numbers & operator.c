#include <stdio.h>
void main ()
{

char o;

int n1,n2,result;

printf("Enter a operator\n");
scanf("%c",&o);

printf("Enter a no.1\n");
scanf("%d",&n1);

printf("Enter a no.2\n");
scanf("%d",&n2);

switch(o)
{
case '+': result=n1+n2;
printf("%d",result);
break;

case '*': result=n1*n2;
printf("%d",result);
break;

case '/': result=n1/n2;
printf("%d",result);
break;

case '-': result=n1-n2;
printf("%d",result);
break;

default: printf("Invalide");
}
}
