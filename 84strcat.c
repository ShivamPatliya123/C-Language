#include<stdio.h>
int main()
{
    char str1[20]="shivam";
    char str2[20]="patliya";
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("\njoin=%s:",str1);
    return 0;
}
