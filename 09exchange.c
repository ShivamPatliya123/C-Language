#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a");
    scanf("\n %d",&a);
    printf("enter the value of b");
    scanf("\n %d",&b);
    temp=a;
    a=b;
    b=temp;
    printf(" \n a exchange of b%d",a);
    printf("\n b exchange of a%d",b);
    return 0;
}
