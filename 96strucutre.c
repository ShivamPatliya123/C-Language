#include<stdio.h>
int main()
{
    struct student
    {
        int Rollno;
        float marks;
        char name[20];
    }s1;
    printf("\n Enter the roll no:");
    scanf("%d",&s1.Rollno);
    printf("\n Enter the marks :");
    scanf("%f",&s1.marks);
    printf("\n Enter the name:");
    scanf("%s",&s1.name);
     
     printf("\n roll no=%d",s1.Rollno);
     printf("\n marks=%0.2f",s1.marks);
     printf("\n name=%s",s1.name);
}
