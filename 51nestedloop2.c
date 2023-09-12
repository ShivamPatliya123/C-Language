#include<stdio.h>
int main()
{
    int rows;
    int columns;
    int k=1;
    printf("Enter the value of rows");
    scanf("%d",&rows);
    printf("Enter the value of columns");
    scanf("%d",&columns);
    int i=1;
    while(i<=rows)
    {
        int j=1;
        while(j<=columns)
        {
            printf("%d",k);
            k++;
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
