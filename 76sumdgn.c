#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element of array a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            if(i==j)
            {
                printf("diagonal=%3d",a[i][j]);
                sum=sum+a[i][j];
            }
            
        }
        
        printf("\n");
    }
     printf("sum of diagonal%d",sum);
    return 0;
}
