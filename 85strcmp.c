#include<stdio.h>
int main()
{
    char str1[20]="shivam";
    char str2[20]="patliya";
    int i=0;
    int isequal=1;
    while(str1[i]!='\0'|| str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
           isequal =0;
           break;
        }
        i++;
    }
    if(isequal)
    {
        printf("The string is equal\n");
    }
    else 
    {
        printf("The string is not equal\n");
    }
    return 0;
}
