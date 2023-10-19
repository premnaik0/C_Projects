#include <stdio.h>
void main()
{
int display(int*,int);
int i;
int marks[]={50,70,80,60,40};
display(&marks[0],5);
}
int display(int*j,int n)
{
int i;
for(i=0;i<=n-1;i++)
{
printf("\t%d",*j);
j++;
}
}
