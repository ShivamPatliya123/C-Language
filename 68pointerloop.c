#include<stdio.h>
int main()
{
    int n,i=1,t;
    int *p=&n,*p1=&i,*p2=&t;
    printf("Enter the no of n:");
    scanf("%d",&n);
    for(*p1;*p1<=10;(*p1)++)
    {
        *p2=(*p) * (*p1);
        printf("\ntable=%d",*p2);
    }
    
    return 0;
}
