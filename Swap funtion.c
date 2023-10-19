#include <stdio.h>
void main()
{
 void swap(int,int);
 int n1,n2;

 printf("hello\n");

 printf("enter 1 no.\n");
 scanf("%d",&n1);

 printf("enter 2 no.\n");
 scanf("%d",&n2);

 printf("\n%d \t%d",n1,n2);

 swap(n1,n2);
 printf("\n%d \t%d",n1,n2);
}
void swap(int n1,int n2)
{
 int n3;
 n3=n2;
 n2=n1;
 n1=n3;
 printf("\n%d \t%d",n1,n2);
}
