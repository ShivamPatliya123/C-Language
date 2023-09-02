#include<stdio.h>
int main()
{
    int ch,b,h,r,s;
    printf("\n 1.Area of triangle \n 2.Area of circle \n 3. Area of square");
    printf("\n Enter your choice(1 to 3)");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("\n Enter Base and Height");
        scanf("%d %d",&b,&h);
        printf("\n Area of triangle %f",.5*b*h);
    }
    if(ch==2)
    {
        printf("\n Enter the radius");
        scanf("%d",&r);
        printf("\n Area of circle %f",3.14*r*r);
    }
    if(ch==3)
    {
        printf("\n Enter the side");
        scanf("%d",&s);
        printf("\n Area of square %d",s*s);
    }
    return 0;
}
