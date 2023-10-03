/*with return type and no argument 
#include<stdio.h>
void main()
{
  int add();
    int c;
  c=add();
  printf("addition:%d",c);
}
int add()
{
    int a,b,c;
    printf("Enter the value:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return (c);
}*/
// no return type and no argument
#include<stdio.h>
void main()
{
    void add();
    add();
}
void add()
{
int a,b,c;
printf("Enter the no:");
scanf("%d %d",&a,&b);
c=a+b;
printf("Addition =:%d",c);

}
