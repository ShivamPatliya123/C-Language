#include<stdio.h>
int main()
{
    int num,sum=0,rev=0;
    printf("Enter the no");
    scanf("\n%d",&num);
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    printf("Enter valeu is:%d",rev);
}
