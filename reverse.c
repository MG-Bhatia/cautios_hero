#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char *point;
    char y;
    int a;
    int b;
    
point =(char*)
malloc(sizeof(char));

    
    printf("Alphabets : \n");
    for ( y = 'a'; y < 'z'; y++)
    {
      for ( a = 0; a < 2; a++)
    {
       for ( b = 0; b < 13; b++)
    {
        point=&y;
        printf("%c \n", *point);
    }
      
        printf("\n");
    }
    
    }
    
}