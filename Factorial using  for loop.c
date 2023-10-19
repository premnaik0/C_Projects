#include <stdio.h>
void main ()

{
 int x,y=1,i;

 printf("Please enter your number\n");
 scanf("%d",&x);

 for (i=1;i<=x;i++)
 {
   y=y*i;
 }
 printf("%d",y);
}
