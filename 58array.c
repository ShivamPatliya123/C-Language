#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
    printf("the no of array:",i);
    scanf("%d",&a[i]);
    }
 
    for(int i=0;i<n;i++)
    {
        printf("\n Element %d %d",i,a[i]);
    }
    return 0;
}
