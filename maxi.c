#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a;
    int b;
    int *x = &a;
    int *y = &b;



    printf("enter 1st number ");
    scanf("%d",&a);

    printf("enter 2nd number ");
    scanf("%d",&b);

  if (*x>*y )
  {
    printf("%d is the maximum number \n",a);
     printf("%d is the minimum number \n",b);
  }

    
  else if (*x==*y)
  {
    printf("the numbers are equal");
  }


  else if (*y>*x )
  {
    printf("%d is the maximum number \n",b);
     printf("%d is the minimum number \n",a);
  }

   
}