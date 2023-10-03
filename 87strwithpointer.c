#include<stdio.h>
int main()
{
    char str[20],*p;
    int i;
    p=str;
    printf("\n Enter the any string");
    scanf("%s",str);
    i=0;
    while (p[i]!='\0')
    {
        printf("%c",p[i]);
        p++;
    }
    return 0;
}
