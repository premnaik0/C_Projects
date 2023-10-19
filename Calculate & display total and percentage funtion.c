#include <stdio.h>
void main()
{
void per();
printf("hello\n");
per();
}
void per()
{
int n1,n2,n3,sum,per;
printf("Enter no.1\n");
scanf("%d",&n1);
printf("Enter no.2\n");
scanf("%d",&n2);
printf("Enter no.3\n");
scanf("%d",&n3);
sum=n1+n2+n3;
per=(sum*100)/300;
printf("%d\n",sum);
printf("%d\n",per);
}
