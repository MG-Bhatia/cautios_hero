#include<stdio.h>
#include<stdlib.h>

int maximini ()
{
    int a;
    int b;
    int *x = &a;
    int *y = &b;

    printf("Function Program to determine Max and Min");
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

int main ()
{
    maximini();
}