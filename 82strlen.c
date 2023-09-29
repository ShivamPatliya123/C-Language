#include<stdio.h>
int main()
{
    char str[20];
    int n;
    printf("\n Enter string:");
    //scanf("%s",str);
    gets(str);
    n=strlen(str);
    printf("\n string size of:%d",n);
    return 0;
}
