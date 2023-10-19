#include <stdio.h>
void main()
{
int a,fact;
int factorial(int);
printf("Enter a number\n");
scanf("%d",&a);
fact=factorial(a);
printf("%d",fact);
}
int factorial(int x)
{
int f;
if(x==1)
 return(1);
else
 f=x*factorial(x-1);
return(f);
}
