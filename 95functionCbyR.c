#include<stdio.h>
void main()
{
    void add(int*,int*);
    int a,b;
    printf("Enter the no of a and b");
    scanf("%d%d",&a,&b);
    printf("\n after fuction call a=%d and b=%d",a,b);
    add(&a,&b);
    printf("\n before fuction call a=%d and b=%d",a,b);
}
void add(int *x,int *y)
{
    *x=*x+20;
    *y=*y+40;
    printf("\n Inside function a=%d and b=%d",*x,*y);
}
