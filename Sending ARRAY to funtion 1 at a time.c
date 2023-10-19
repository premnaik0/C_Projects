#include <stdio.h>
void main()
{
int display(int);
int i;
int marks[]={50,70,80,60,40};

for(i=0;i<=5;i++)
display(marks[i]);
}
int display(int m)
{

printf("\t%d",m);
}
