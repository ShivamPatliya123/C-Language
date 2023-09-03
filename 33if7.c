#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter the no.");
    scanf("%d",&n);
    if(n>100)
    {
        if(n<150)
        {
            printf("\n Entered no is > 100 but < 150");
        }
        else
        {
            printf("\n Enter no is > 100 but < 150");
        }
    }
    else
    {
        if(n>50)
        {
            printf("\n Enter the no. is < 100 but < 50");
        }
        else
        {
            printf("\n Entered no. is > 100 but not < 50");
        }
    }
    return 0;
}
