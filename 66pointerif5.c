#include<stdio.h>
int main()
{
    int a,b;
    int *p=&a,*p1=&b;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    if(*p>*p1)
    printf("\n*p is greater=%d",*p);
    else
    printf("\n *p1 is greater =%d",*p1);
return 0;
}
