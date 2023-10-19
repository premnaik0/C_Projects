#include <stdio.h>
void main ()
{

 int x[2][3],y[3][2];
 int i,j;
 printf("Enter array elemeents\n");

  for(i=0;i<=1;i++)
 {
   for(j=0;j<=2;j++)
   {
   scanf("%d",&x[i][j]);
   }
 }
  for(i=0;i<=1;i++)
 {
  for(j=0;j<=2;j++)
  {
  y[j][i]=x[i][j];
  }
 }
  for(i=0;i<=2;i++)
 {
  for(j=0;j<=1;j++)
  {
  printf("%d\t",y[i][j]);
  }
  printf("\n");
 }
}
