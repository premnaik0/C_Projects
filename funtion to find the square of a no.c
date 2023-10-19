#include <stdio.h>
void main()
{
int square();
int n1,sum;

printf("Please enter a no.");
scanf("%d",&n1);

sum=square(n1);
printf("%d",sum);
}
int square(int n1)
{
int sum;
sum=n1*n1;
return sum;
}
