#include<stdio.h>

int main ()
{
    int x;
    int y;
    int z = 0;

    printf("enter number or rows x columns ");
    scanf("%d",&z);

    for ( x = 0; x < z; x++)
    {
       for ( y = 0; y < z; y++)
    {
        printf(" * ");
    }
      
        printf("\n");
    }

    
    
}