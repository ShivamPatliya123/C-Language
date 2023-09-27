#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    float avg,*p3=&avg;
    int *p=&i,*p1=&n,*p2=&sum;
    printf("enter the no of n:");
    scanf("%d",&n);
    for(*p=0;*p<*p1;(*p)++)
    {
        printf("element of array a[%d]:",*p);
        scanf("%d",(a+*p));
        *p2 = *p2 + *(a+*p);
    }
    *p3 = (*p2 / *p1);
    printf("\nsum=%d",*p2);
    printf("\naverage=%.2f",*p3);
    
    return 0;
}
