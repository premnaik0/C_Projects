#include <stdio.h>
void main ()
{
int x,y,z;
printf("Please enter bill amount\n");
scanf("%d",&x);

if (x>5000)
   {
   y=x*10/100;
   }
else
   {
   y=x*5/100;
   }
z=x-y;
printf("%d",z);
}
