/*#include<stdio.h>
int swap()
{
    int a,b,c;
    printf("Enter the no");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nenter no is swap=%d",a);
     printf("\nenter no is swap=%d",b);
     return 0;
}
int main()
{
    int swap();
    swap();
}*/
#include<stdio.h>
int swap()
{
    int a,b;
    printf("Enter the no:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswaping is =%d",a);
    printf("\nswaping is =%d",b);
    return 0;
}
int main()
{
    int swap();
    swap();
}

