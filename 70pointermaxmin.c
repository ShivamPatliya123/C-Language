#include<stdio.h>
int main()
{
    int a[100],i,n,max,min;
    int *p=&a[0],*p1=&i,*p2=&n,*p3=&max,*p4=&min;
    printf("Enter the no of n:");
    scanf("%d",&n);
    for(*p1=0;*p1<*p2;(*p1)++)
    {
        printf("#elememt is =%d:",*p1);
        scanf("%d",(p+i));
    }
    *p3=a[0];
    *p4=a[0];
    for(*p1=0;*p1<*p2;(*p1)++)
    {
        if(*(p+i)>*p3)
        {
            *p3=*(p+i);
        }
        if(*(p+i)<*p4)
        {
            *p4=*(p+i);
        }
    }
    printf("\nmaximum=%d",*p3); 
     printf("\nminimum=%d",*p4);
}
