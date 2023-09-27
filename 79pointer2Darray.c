#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element of array a[%d]:",i);
            scanf("%d",*(a+i)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",*(*(a+i)+j));
        }
        printf("\n");
    }
}
