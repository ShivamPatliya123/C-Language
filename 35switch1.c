#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter any number");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:printf("\n Enter number is even");
                break;
        case 1:printf("\n Enter number is odd");
                break;
    }
    return 0;
}
