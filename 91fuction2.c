/*#include<stdio.h>
void main()
{
    void even();
    even();
}
void even()
{
    int a;
    printf("Enter the no:");
    scanf("%d",&a);
    int b=a%2;
    if(b==0)
    {
    printf("no is even");
    }
    else
    {
        printf("no is not even");
    }
}*/
#include<stdio.h> 
int main()
{
    int even(int);
    int a;
    printf("Enter the no of a");
    scanf("%d",&a);
    even(a);
}
int even(int b)
{
  int c;
  c=b%2;
  if(c==0)
  {
    printf("Enter no is even");
  }
  else
  {
    printf("Enter no is not even");
  }
  return 0;
}
