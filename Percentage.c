#include <stdio.h>
void main ()
{
float x;
printf("Enter Percentage\n");
scanf("%f",&x);

if (x>=75)
printf("Distinction");

else if (x>=60 && x<75)
printf("1st Class");

else if (x>=50 && x<60)
printf("2nd Class");

else if (x>=40 && x<50)
printf("Pass Class");

else
printf("Fail");
}
