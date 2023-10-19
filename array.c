#include<stdio.h>
void main()
{
int marks [10],i,sum=0,avg;
printf("enter marks");
for(i=0;i<=9;i++)
scanf("%d",&marks[i]);
for(i=0;i<=9;i++)
sum=sum+marks[i];
avg=sum/10;
printf("%d\n",sum);
printf("%d",avg);
}
