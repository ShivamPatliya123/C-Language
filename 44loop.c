#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the any number");
    scanf("\n%d",&num);
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("\n Sum of digits=%d",sum);
    return 0;
}
