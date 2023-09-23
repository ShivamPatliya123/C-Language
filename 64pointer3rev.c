#include<stdio.h>
int main()
{
    int a,b,temp;
     int *p=&a,*p1=&b,*p2=&temp;
     printf("Enter the no a and b");
     scanf("%d %d",&a,&b);
     *p2=*p;
     *p=*p1;
     *p1=*p2;
     printf("\nvalue at=:%d",*p);
     printf("\nvalue at =:%d",*p1);
     return 0;
}
