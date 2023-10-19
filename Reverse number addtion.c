#include <stdio.h>
void main ()
{

int x,y,sum=0;
printf("Enter a number\n");
scanf ("%d",&x);

while (x!=0)
{
y=x%10;
sum=sum*10+y;
x=x/10;

}
printf("%d",sum);
}
