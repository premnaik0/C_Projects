#include <stdio.h>
void main()
{
int num,ans;
printf("enter a number ");
scanf("%d",&num);
ans=square(num);
printf("%d",ans);
}
int square(int num)
{
int ans;
ans=num*num;
return ans;
}

