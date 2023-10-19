#include <stdio.h>
void main()
{
int sal,hra,da,total;
printf("enter sal");
scanf("%d",&sal);

if(sal>=20000)
{
hra=20*sal/100;
da=10*sal/100;
}
else
{
hra=10*sal/100;
da=5*sal/100;
}
total=sal+hra+da;
printf("%d,%d,%d,%d",sal,hra,da,total);
}
