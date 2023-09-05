#include<stdio.h>
int main()
{
    float b,h,result;
    int ch;
    printf("\n 1.Area of triangle \n 2.Area of circle \n 3.Area of square ");
    printf("\n Enter your choice");
    scanf("%d",&ch);
   
    switch(ch)
    {
        case 1:  printf("\n Enter the value of b");
                   scanf("%f",&b);
                 printf("\n Enter the value of h");
                    scanf("%f",&h); 
                      result=b*h;
                       printf("%f",result);
                        break;
        case 2: printf("\n Enter the value of b");
                 scanf("%f",&b); 
                  result=3.14*(b*b);
                   printf("%f",result);
                break;
        case 3:printf("\n Enter the value of h");
               scanf("%f",&h);
                 result=(h*h);
                 printf("%f",result);
                   break;
    }
    return 0;
}
