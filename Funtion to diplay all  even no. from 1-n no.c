#include <stdio.h>
void main()
{
 void even();
 int n;

 printf("Please enter a no.\n");
 scanf("%d",&n);

 even(n);
}
void even(int n)
{
int i,sum;
 for(i=1;i<=n;i++)
 {
 if(i%2==0)
  {
  printf("\n%d",i);
  }
 }
}
