#include <stdio.h>

void main()
{
    int unit;
    float amt=0,total=0;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    total=amt+50;

    if(unit>=100)
    {
        amt=100*0.5;
        unit=unit-100;
        total=amt+total;
    }
    else if(unit>=100)
    {
        amt=100*1;
        unit=unit-100;
        total=amt+total;
    }
    else if(unit>=0)
    {
        amt=unit*2;
        total=amt+total;
    }
    else
    {
        printf("Enter valid value");
    }

    printf("Electricity Bill = Rs. %.2f", total);

 }
