#include<stdio.h>
int main()
{
    int a=80;
    int b=45;
    int c=a^b;
    a=a^c;
    b=b^c;
  
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}
