#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the no");
    scanf("\n%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswapin is=%d",a);
    printf("\nswaping is=%d",b);
    return 0;
}
