#include <stdio.h>
void main ()

{
  int x,y=1,i;
  int fact();
  printf("Please enter your number\n");
  scanf("%d",&x);
  y=fact(x,y,i);
  printf("%d",y);
}

int fact(int x,int y,int i)
{
  for (i=1;i<=x;i++)
  {
  y=y*i;
  }
  return y;
}

