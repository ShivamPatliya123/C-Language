#include<stdio.h>
int main()
{
    int a,i=1,t;
    printf("Enter any number");
    scanf("\n %d",&a);
    while(i<=10)
    {
        t=a*i;
        i++;
        printf("\n %d",t);
    }
    return 0;
}
