#include<stdio.h>
int main()
{
    int a[5],i,mid;
    for(i=0;i<5;i++)
    {
        printf("Enter the a[%d]:",i);
        scanf("%d",&a[i]);
    }
     mid =5/2;
    
    printf("middle=%d",a[mid]);
    return 0;
}
