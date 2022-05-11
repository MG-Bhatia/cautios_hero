#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x;
    int y;
    int *point;
    
    printf("input total number of values \n");
    scanf("%d",&x);

    point = realloc(point, x * sizeof(int));

 
  for ( y = 0; y < x; y++)
 {
    printf("\n type in value \n",x);
    scanf("%d",(point+y));
 }


 printf("\n values are ");
  for ( y = 0; y < x; y++)
 {
    printf("%d", *(point+y));
 }4


 free(point);
}