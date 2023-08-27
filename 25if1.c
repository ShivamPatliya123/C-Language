#include <stdio.h>
int main()
{
    int age;
    printf("\n Enter the age");
    scanf("\n %d",&age);
    if(age>=18)
    {
    printf("\n eligible for vote");
    printf("\n Thank you for vote");
    }
    else
    {
   printf("\n not eligible for vote");
   printf("\n Wait for Right age");
   }
   return 0;
   }
