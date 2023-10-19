#include <stdio.h>
void main()
{
int n1,n2;
void great();

printf("Please enter a no.");
scanf ("%d",&n1);

printf("Please enter a no.");
scanf ("%d",&n2);

great(n1,n2);
}
void great(int n1,int n2)
{
if (n1==n2)
{
printf("Both no.'s are equal");
}
else if (n1<n2)
{
printf("n2 is greater");
}
else
{
printf("n1 is greater");
}
}
