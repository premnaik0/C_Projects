#include <stdio.h>
void main ()
{

int x,reminder,sum=0;
printf("Enter a number\n");
scanf ("%d",&x);

while (x!=0)
{
reminder=x%10;

sum=sum+reminder;

x=(x/10);
}
printf("%d",sum);
}
