#include<stdio.h>
int main()
{
    struct workers
    {
        int idno;
        float salary;
        struct name
        {
            char fname[20];
            char lname[20];
        }n;
    }w;
    printf("enter the idno");
    scanf("%d",&w.idno);
    printf("enter the salary");
    scanf("%f",&w.salary);
    printf("enter the fname");
    scanf("%s",w.n.fname);
    printf("enter the lname");
    scanf("%s",w.n.lname);
    

    printf("\nidno is=%d",w.idno);
    printf("\nsalary is =%f",w.salary);
    printf("\nfname is =%s",w.n.fname);
    printf("%s",w.n.lname);
     
     return 0;
}
