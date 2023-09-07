#include<stdio.h>
int main()
{
    int n,i=1,f=1;
    printf("Enter any no.");
    scanf("%d",&n);
    while (i<=n)
    {
      f=f*i;
      i=i+1;
    } 
     printf("\n%d",f);
    return 0;
}
