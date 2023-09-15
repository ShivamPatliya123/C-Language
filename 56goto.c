#include<stdio.h>
int main()
{
    
    int i;
    double num,sum=0.0,avarage;
    for(i=1;i<=100;++i)
    {
        printf("Enter the no.%d:",i);
        scanf("%lf",&num);
        if (num<0.0)
        {
         goto cal;
        }
        sum +=num;
        
    }
    cal:
    avarage =sum/(i-1);
    printf("sum=%.2f",sum);
    printf("avarage=%.2f",avarage);
    return 0;

}
