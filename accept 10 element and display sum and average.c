#include <stdio.h>
void main()
{
    int marks[4],i=0,sum=0,avg;

    for(i=0;i<=4;i++)
    {
        printf("enter marks out of 60\n");
        scanf("%d",&marks[i]);
    }

    for(i=0;i<=4;i++)
    {
        sum=sum+marks[i];
    }

    printf("\nSum: \n%d",sum);
    avg=sum/5;

    printf("\nAverage: \n%d",avg);

}
