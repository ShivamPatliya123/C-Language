#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter year");
    scanf("%d",&n);
    switch(n%4==1)
    {
        case 0:printf("\n year is leapyear");
                break;
        case 1:printf("\n year is normal year");
                break;
    }
    return 0;
}
