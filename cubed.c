#include<stdio.h>
#include<stdlib.h>

int cube ()
{
    int x;
    int three;
    

    printf("Function Program to find Cube of numbers ");
    printf("input the number that is to be cubed , \n");
    scanf("%d",&x);
    three = x*x*x;
    printf("\n");
    printf("The cube is\n");
    printf("%d \n",three);
}

int main ()
{
    cube();
    printf(" ");
}