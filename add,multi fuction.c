#include <stdio.h>
void main()
{
void add();
void multi();
printf("hello\n");
add();
multi();
}
void add()
{
int n1,n2,sum;
printf("Enter no.1\n");
scanf("%d",&n1);
printf("Enter no.2\n");
scanf("%d",&n2);
sum=n1+n2;
printf("%d\n",sum);
}
void multi()
{
int n1,n2,multi;
printf("Enter no.1\n");
scanf("%d",&n1);
printf("Enter no.2\n");
scanf("%d",&n2);
multi=n1*n2;
printf("%d\n",multi);
}
