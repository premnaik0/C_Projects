#include <stdio.h>
void main()
{
int i;
float ar,r;  /*where r is radius and ar is area*/
for (i=1;i<=5;i++)
{
printf("Please enter r\n");
scanf("%f",&r);

ar=3.14*r*r;

printf("%f\n",ar);
}
}
