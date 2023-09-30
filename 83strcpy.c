#include <stdio.h>

int main() {
    char str1[20];
    char str2[20]; 
    int i;
    printf("\n enter the string");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    
    
   str2[i] = '\0';

    printf("Source: %s\n", str1);
    printf("Copy: %s\n",str2);

    return 0;
}





