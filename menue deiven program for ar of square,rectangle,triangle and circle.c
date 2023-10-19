#include <stdio.h>
void main ()
{
void square();
void rec();
void tri();
void cir();
char o,ans1;
int l,b,s,r,h,ans,ans2; //where l=length, b=breadth, s=side, r=radius, h=height

printf("Please select a operator from the following\n Enter 1 for ar of square\n Enter 2 for ar of rectangle\n Enter 3 for ar of triangle\n Enter 4 for ar of circle\n ");
scanf("%d",&o);

switch(o)

case 1:

void square()
{
printf("Please enter s");
scanf("%d",&s);
ans=s*s;

printf("%d",ans);
break;
}

case 2:

void rec()
{
printf("Please enter l");
scanf("%d",&l);

printf("Please enter b");
scanf("%d",&b);

ans=l*b;
printf("%d",ans);
break;
}

case 3:

void tri()
{
printf("Please enter b");
scanf("%d",&b);

printf("Please enter h");
scanf("%d",&h);

ans2=0.5*b*h;
printf("%d",ans);
break;
}

case 4:

void cir()
{
printf("Please enter r");
scanf("%d",&r);

ans1=3.14*r*r;
printf("%d",ans1);
break;
}

default: printf("Please enter a valid Number or Operator");
