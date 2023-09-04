#include<stdio.h>
int main()
{
    int a,b, ch;
    float result;
    printf("\n 1. Addition= \n 2.subtract= \n 3.multiply= \n 4.divided");
    printf("\n Enter your choice(1 to 4)");
    scanf("%d",&ch);
    printf("\n Enter two value");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case 1:result=a+b;
                break;
        case 2:result=a-b;
                break;
        case 3:result=a*b;
                break;
        case 4:result=(float) a/b;
                break;
        default: printf("\ Enter only (1 to 4)");
                  break;
    }
    printf("\n result=%.2f",result);
    return 0;
}
