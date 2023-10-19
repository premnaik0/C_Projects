#include <stdio.h>
void main()
{
void sub();
printf("hello\n");
sub();
}
void sub()
{
int n1,n2,n3,sub;
printf("Enter no.1\n");
scanf("%d",&n1);
printf("Enter no.2\n");
scanf("%d",&n2);
printf("Enter no.3\n");
scanf("%d",&n3);
sub=n1-n2-n3;
printf("%d\n",sub);
}
