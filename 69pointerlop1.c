#include<stdio.h>
int main()
{
    int n,i=1,f=1;
    int *p=&n,*p1=&i,*p2=&f;
    printf("Enter the no of n:");
    scanf("%d",&n);
    while((*p1)<=(*p))
    {
        *p2=(*p2)*(*p1);
        *p1=*p1 + 1;
    }
    printf("\n factorial=%d",*p2);
    return 0;
}
