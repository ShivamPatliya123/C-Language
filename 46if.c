#include<stdio.h>
int main()
{
    float hindi,english,maths,science,social,sum,per;
    printf("enter the hindi no");
    scanf("\n%f",&hindi);
    printf("enter the english no");
    scanf("\n%f",&english);
    printf("enter the maths no");
    scanf("\n%f",&maths);
    printf("enter the science no");
    scanf("\n%f",&science);
    printf("enter the social no");
    scanf("\n%f",&social);
     if(hindi<33||english<33||maths<33||science<33||social<33)
     {
        printf("FAIL");
        return 0;
     }
     else
     {
     printf("\nPASS");
     }
     sum=hindi+english+maths+science+social;
     printf("\nsum=%.2f",sum);
     per=(sum/500)*100;
     printf("\npercentage=%.2f",per);
     return 0;
}
