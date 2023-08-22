#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the value a");
 scanf("\n %d",&a);
 printf("enter the value b");
 scanf("\n %d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n a exchange of b %d",a);
 printf("\n b exchange of a %d",b);
 return 0;   
}
