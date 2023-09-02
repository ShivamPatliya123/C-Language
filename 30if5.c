#include<stdio.h>
int main()
{
    int N;
    printf("enter the number");
    scanf("\n %d",&N);
    if(N>0)
    {
        printf("\n value is positive");
    }
    else if(N<0)
    {
        printf("\n value is nagative");
    }
    else
    {
        printf("\n value is zero");
    }
    return 0;
}
