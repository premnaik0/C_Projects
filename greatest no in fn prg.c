#include <stdio.h>
void main()
{
void great(int,int);
int n1,n2;
printf("enter 1st number");
scanf("%d",&n1);
printf("enter 2nd number");
scanf("%d",&n2);
great(n1,n2);
}
void great(int n1, int n2)
{
if(n1==n2)
printf("both are equal");
else if(n1>n2)
printf("1st number is greater");
else
printf("2nd number is greater");

}
