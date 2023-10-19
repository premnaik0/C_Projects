#include <stdio.h>
void main()
{
 int add();
 int sub();
 int multi();
 int div();

 int n1,n2,sum;
 printf("hello\n");

 printf("Enter no.1\n");
 scanf("%d",&n1);

 printf("Enter no.2\n");
 scanf("%d",&n2);

 sum=add(n1,n2);
 printf("%d\n",sum);
 sum=sub(n1,n2);
 printf("%d\n",sum);
 sum=multi(n1,n2);
 printf("%d\n",sum);
 sum=div(n1,n2);
 printf("%d\n",sum);

}

int add(int n1,int n2)
{
int sum;
sum=n1+n2;
return sum;
}

int sub(int n1,int n2)
{
int sum;
sum=n1-n2;
return sum;
}

int multi(int n1,int n2)
{
int sum;
sum=n1*n2;
return sum;
}

int div(int n1,int n2)
{
int sum;
sum=n1/n2;
return sum;
}

