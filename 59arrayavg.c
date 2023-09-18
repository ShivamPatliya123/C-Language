#include<stdio.h>
int main()
{
    int a[100],sum=0,n;
    float avg;
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        printf("\n enter the element a[%d]",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("sum=%d",sum);
    printf("\n avg=%.2f",avg);
    return 0;
}
