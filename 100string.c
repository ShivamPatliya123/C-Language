#include<stdio.h>
int main()
{
    char str[20],str1[20];
    int flag;
    printf("Enter the str");
    gets(str);
    strcpy(str1,str);
    strrev(str1);
    flag=strcmp(str,str1);
    if(flag==0)
    {
        printf("given string is palindrom");

    }
    else
    printf("given sring is not palindrom");
      
      return 0;
}
