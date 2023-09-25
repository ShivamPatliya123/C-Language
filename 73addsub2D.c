#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3],c[3][3],d[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Element of first array a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Element of second array b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
           
        }
    }
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           
            d[i][j]=a[i][j]-b[i][j];
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%3d",c[i][j]);
        }
        printf("\n");
    }
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         
          printf("%3d",d[i][j]);
        }
        printf("\n");
    }
}
