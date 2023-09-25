#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("\n Input in 2D arraay");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
