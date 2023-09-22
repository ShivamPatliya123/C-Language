#include<stdio.h>


int main()
{
    int a;
       int *p=&a;
    printf("Enetr the value of a");
    scanf("%d",&a);
      //int *p=&a;
    printf("\n Address of a:%p",&a);
    printf("\n value of p:%p",p);
    return 0;

}
