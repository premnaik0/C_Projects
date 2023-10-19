#include <stdio.h>
void main ()
{
float x,y,z,T,P;
printf("Enter x\n");
scanf("%f",&x);

printf("Enter y\n");
scanf("%f",&y);

printf("Enter z\n");
scanf("%f",&z);
T=x+y+z;
P=T/300*100;

printf("%f",T);
printf("%f",P);

if(P>=40)
{
printf("Pass\n");
}
else
{
printf("fail\n");
}
}
