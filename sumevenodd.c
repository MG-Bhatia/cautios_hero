#include<stdio.h>
#include<stdlib.h>

int sumeven ()
{
  int x;
  int add=0;
  int limit;

  printf("enter range of values for EVEN numbers \n");
  scanf("%d",&limit);

  for ( x = 0; x <= limit; x++)
  {
    if (x % 2 == 0)
    {
        add += x;
    }
    
  }

  printf("sum of all even numbers up to %d \n = %d \n",limit,add);
  printf(" \n");
}

int sumodd ()
{
  int y;
  int addd=0;
  int lim;

  printf("enter range of values for ODD numbers \n");
 scanf("%d",&lim);

  for ( y = 0; y <= lim; y++)
  {
    if (y % 2 != 0)
    {
        addd += y;
    }
    
  }

  printf("sum of all odd numbers up to %d \n = %d \n",lim,addd);
}


int main ()
{
    sumeven();
    sumodd();
}