#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    int *p1=&a,*p2=&b,*p=&c;
    int *p3=&d,*p4=&e,*p5=&f,*p6=&g;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    *p =*p1 + *p2;
    *p3=*p1 - *p2;
    *p4=*p1 * *p2;
    *p5=(*p1)/(*p2);
    *p6=*p1 % *p2;
    printf("\n Addition=%d",*p);
    printf("\n subtraction=%d",*p3);
    printf("\n multiply=%d",*p4);
    printf("\n divided=%d",*p5);
    printf("\n modul=%d",*p6);
    return 0;
}
