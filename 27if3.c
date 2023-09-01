#include <stdio.h>
int main()
{
    int a;
    printf("enter percentsge a");
    scanf("\n %d",&a);
    if(a<=40)
    printf("\n grade C");
    else if(a<=50)
    printf("\n grade B");
    else if(a<=65)
    printf("\n grade B+");
    else if(a<=75)
    printf("\n grade A");
    else
    printf("\n grade A+");
    return 0;
}
