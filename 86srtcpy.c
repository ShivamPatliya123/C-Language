#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("\n Enter the string:");
     gets(str1);
     strcpy(str2,str1);
     printf("copy string is:= %s",str2);
     return 0;
}
