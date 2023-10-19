#include <stdio.h>
void main()
{
int marks[10],i;

printf("enter marks\n");

for(i=0;i<=9;i++)
scanf("%d",&marks[i]);

for (i=0;i<=9;i++)
{
if(marks[i]%2==0)
{
printf("no. is even\n");
i++;
}
else
{
printf("no. is odd\n");
i++;
}
}
}
