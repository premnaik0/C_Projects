#include <stdio.h>
void main ()
{

 int x[2][3],y[2][3],z[2][3];
 int i,j;
 printf("Enter array elemeents to add\n");

 for(i=0;i<=1;i++)
 {
   for(j=0;j<=2;j++)
   {
   scanf("%d",&x[i][j]);
   }
 }
 printf("Enter array elemeents to add\n");
 for(i=0;i<=1;i++)
 {
   for(j=0;j<=2;j++)
   {
   scanf("%d",&y[i][j]);
   }
 }
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=2;j++)
  {
  z[i][j]=x[i][j]+y[i][j];
  }
 }
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=2;j++)
  {
  printf("%d\t",z[i][j]);
  }
  printf("%d\n");
 }
}
