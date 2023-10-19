#include <stdio.h>
void main ()
{

int n,n1,n2,n3,i;

printf("Enter no. of time\n");
scanf("%d",&n);

n1=0;
n2=1;

printf("%d\t%d\t",n1,n2);
i=3;
do
{
n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
i++;
}while (i<=n);

}
