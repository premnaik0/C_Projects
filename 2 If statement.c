#include <stdio.h>
void main ()
{
int x,y;
printf("Enter 2 numbers");
scanf("%d %d",&x,&y);

if (x>y)
printf("x is greater");
else if (x<y)
printf("y is greater");
else
printf("both numbers are equal");

}
