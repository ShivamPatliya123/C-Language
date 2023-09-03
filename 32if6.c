#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the 3 number");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("\n n1=%d is maximum",n1);
        }
        else 
        {
            printf("\n n3=%d is maximum",n3);
        }
    }
    else
    {
    if(n2>n3)
    
    {
        printf("\n n2=%d is maximum",n2);
    }
    else
    {
        printf("\n n3=%d is maximum",n3);
    }
    }
    return 0;
}
