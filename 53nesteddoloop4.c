#include<stdio.h>
int main()
{
    int rows,i,j;
    i=1;
    printf("Enter the no of rows");
    scanf("%d",&rows);
    do 
    {
        j=1;
        do
        {
            printf("%d",j);
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }while(i<=rows);
    return 0;
}
