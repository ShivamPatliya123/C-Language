#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    strcat(str1,str2);
    printf("cancatenation string is:=%s",str1);
    return 0;
}
