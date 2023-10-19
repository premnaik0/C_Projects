#include <stdio.h>

void add()
{
    int n1,n2,t;

    printf("Enter first number\n");
    scanf("%d",&n1);

    printf("Enter first number\n");
    scanf("%d",&n2);

    t=n1+n2;

    printf("%d\n",t);
}

void sub()
{
    int n1,n2,t;

    printf("Enter first number\n");
    scanf("%d",&n1);

    printf("Enter first number\n");
    scanf("%d",&n2);

    t=n1-n2;

    printf("%d\n",t);
}

void multi()
{
    int n1,n2,t;

    printf("Enter first number\n");
    scanf("%d",&n1);

    printf("Enter first number\n");
    scanf("%d",&n2);

    t=n1*n2;

    printf("%d\n",t);
}

void divi()
{
    int n1,n2,t;

    printf("Enter first number\n");
    scanf("%d",&n1);

    printf("Enter first number\n");
    scanf("%d",&n2);

    t=n1/n2;

    printf("%d\n",t);
}

int main()
{
    int o;

    printf("*************************\n");
    printf("Choose a option\n Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division\n");
    printf("*************************\n");

    scanf("%d",&o);

    switch(o)
    {
    case 1:
        {
            add();
            break;
        }
    case 2:
        {
            sub();
            break;
        }
    case 3:
        {
            multi();
            break;
        }
    case 4:
        {
            divi();
            break;
        }
    default:
        {
            printf("Please enter a valid option\n");
            main();
        }
    }
}
