#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    int *p=&i,*p1=&j,*p2=&sum;
    for(*p=0;*p<3;(*p)++)
    {
        for(*p1=0;*p1<3;(*p1)++)
        {
            printf("element of a[%d][%d]:",*p,*p1);
            scanf("%d",*(a+i)+j);
        }
    }
    for(*p=0;*p<3;(*p)++)
    {
        for(*p1=0;*p1<3;(*p1)++)
        {
            if(*p==*p1)
            {
              printf("diagonal=%d",*(*(a+i)+j));
              *p2=*p2+*(*(a+i)+j);
            }
        }
        printf("\n");
    }
    printf("sum=%d",*p2);
    return 0;
}
