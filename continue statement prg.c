#include <stdio.h>
void main()
{
int i;
i=0;
while(i<5)
{
i++;
if (i==3)
continue;
printf("%d\t",i);
}
}
