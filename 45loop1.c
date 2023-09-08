#include<stdio.h>
int main()
{
    int num,sum=0,rev=0,n;
    printf("Enter the any number");
    scanf("\n%d",&num);
    n=num;
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    if(rev==n)
    printf("Enter number is palindrome");
    else
    printf("Enter number is not palindrome");
    return 0;
}
