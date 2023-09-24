#include<stdio.h>
int main()
{
    int cp,sp,loss,profit;
    int *p=&cp,*p1=&sp,*p2=&loss,*p3=&profit;
    printf("Enter the value of cp and sp:");
    scanf("%d %d",&cp,&sp);
    if(*p1>*p)
    {
        *p3=*p1-*p;
        printf("\n profit is=%d:",*p3);
    }
    else if(*p>*p1)
    {
        *p2=*p-*p1;
        printf("\n loss is=%d:",*p2);
    }
    else {
        printf("\n no profit and no loss:");
    }
    return 0;
}
