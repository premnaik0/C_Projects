#include <stdio.h>
void main ()
{
int x,y,z,T;
printf("Please enter your basic salary\n");
scanf("%d",&x);

if (x>20000)
   {
   y= x*10/100;
   z= x*5/100;
   }
else
   {
   y= x*5/100;
   z= x*3/100;
   }
T= x+y+z;
printf("x=%d,y=%d,z=%d,T=%d",x,y,z,T);
}
