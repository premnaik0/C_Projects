#include <stdio.h>
void main()
{
int n1,n2;
printf("enter first number");
scanf("%d",&n1);
printf("enter second number");
scanf("%d",&n2);
if (n1>n2)
printf("n1 is greatest");
else if(n2>n1)
printf("n2 is greatest");
else
printf("both are equal");
}
