#include<stdio.h>

int main()
{
    int x='a',y='b';
    int *p=&x,*p1=&y;
    printf("value at=%d %d",*p,*p1);
    return 0;
}
