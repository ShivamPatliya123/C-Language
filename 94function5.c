#include<stdio.h>
void main()
{
    void add(int,int);
    int a,b;
    printf("Enter the no of a and b");
    scanf("%d%d",&a,&b);
    printf("\n before function call a=%d and b=%d",a,b);
    add(a,b);
    printf("\n after function call a=%d and b=%d",a,b);

}
void add(int x,int y)
{
    x=x+10;
    y=y+30;
    printf("\n inside function a=%d and b=%d",x,y);
}
