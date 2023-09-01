#include<stdio.h>
int main()
{
    int cp,sp,loss,profit;
    printf(" enter the cost price");
    scanf("\n %d",&cp);//cost price(cp)
    printf("enter the sale price");
    scanf("\n %d",&sp);//sale price(sp)
    if(sp>cp)
    {
        profit=sp-cp;
        printf("\n profit =%d",profit);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        printf("\n loss =%d",loss);
    }
    else
    {
        printf("\n NO profit NO loss");
    }
    return 0;
}
