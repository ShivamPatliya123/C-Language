#include<stdio.h>
int main()
{
    int a,*b=&a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    *b=*b+10;
    printf("\n value of %d",*b);
    return 0;
}
