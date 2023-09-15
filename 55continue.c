#include<stdio.h>
int main()
{
    int i;
    double num,sum=0.0;
    for (i=1;i<=10;++i)
    {
        printf("Enter the no.%d:",i);
        scanf("%lf",&num);
        if(num<0.0)
        {
            continue;
        }
        sum +=num;

    }
    printf("sum=%.2lf",sum);
    return 0;
}
