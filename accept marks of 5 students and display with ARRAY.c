#include <stdio.h>
void main()
{
int i,marks[5];
printf("Enter array elements\n");

for(i=0;i<=4;i++)
scanf("%d",&marks[i]);

for(i=0;i<=4;i++)
printf("\t%d",marks[i]);

}
