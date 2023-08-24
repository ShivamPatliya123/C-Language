#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the element a");
    scanf("\n %d",&a);
     printf("enter the element b");
    scanf("\n %d",&b);
     printf("enter the element c");
  scanf("\n %d",&c);
    printf("\n (a>b) && (a>c)=%d",(a>b)&&(a>c));
    printf("\n (a<b) && (b>c)=%d",(a<b)&&(b>c));
  printf("\n (a<c) && (b<c)=%d",(a<c)&&(b<c));
  printf("\n (a==b) && (a==c)=%d",(a==b)&&(a==c));
  printf("\n (b!=a) && (b==c)=%d",(b!=a)&&(b==c));
  printf("\n (c!=a) && (b==c)=%d",(c!=a)&&(b==c));
   printf("\n (c==a) && (c!=b)=%d",(c==a)&&(c!=b));
       printf("\n (a>b) || (a>c)=%d",(a>b)&&(a>c));
    printf("\n (a<b) || (b>c)=%d",(a<b)&&(b>c));
  printf("\n (a<c) || (b<c)=%d",(a<c)&&(b<c));
  printf("\n (a==b) || (a==c)=%d",(a==b)&&(a==c));
  printf("\n (b!=a) || (b!=a)=%d",(b!=a)&&(b!=a));
  printf("\n (c!=a) || (b==c)=%d",(c!=b)&&(b==c));
   printf("\n (c==a) || (c!=b)=%d",(c==a)&&(c!=b));
   return 0;

}
