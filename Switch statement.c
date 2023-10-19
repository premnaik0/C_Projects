#include <stdio.h>
void main ()
{
int n;
printf("Enter a no.\n");
scanf("%d",&n);
switch(n)
{
case 1: printf("One\n");
break;
case 20: printf("Twenty\n");
break;
case 10: printf("Ten\n");
break;
case 50: printf("Fifty\n");
break;
default: printf("invalid");
}
}
