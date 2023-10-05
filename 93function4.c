#include<stdio.h>
int palindrom()
{
    int a,sum=0,n;
    printf("Enter the no of a");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
    sum=(sum*10)+(a%10);
    a=a/10;
    }
    if(sum==n)
    printf("no is palindrom");
    else 
    printf("no is not palindrom");

}
int main()
{
    int palindrom();
    palindrom();
}
