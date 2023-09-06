#include<stdio.h>
int main()
{
    int a;
    printf("enter the any number");
    scanf("\n %d",&a);
    switch (a>0)
    {
        case 1: printf("\n Enter number is positive");
                 break;
        case 0: switch (a<0)
        {
            case 1: printf("Enter number is negative");
                     break;
            case 0:printf("\n Zero");
                    break;
        }
    }
    return 0;
}
