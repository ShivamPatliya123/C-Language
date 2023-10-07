#include<stdio.h>
int main()
{
    struct student
    {
        int rollno;
        float marks;
        char name[20];

    }s,*p=&s;
    printf("Enter the rollno");
    scanf("%d",&p->rollno);
    printf("enter the marks");
    scanf("%f",&p->marks);
    printf("Enter the name");
    scanf("%s",p->name);



    printf("\n roll no =%d",p->rollno);
    printf("\n marks=%.2f",p->marks);
    printf("\n name=%s",p->name);
    return 0;

}
