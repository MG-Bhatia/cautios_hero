#include<stdio.h>
int max (int number1, int number2);

int main ()
{
    int x =400;
    int y =500;
    int store;

    store = max (x,y);

    printf("Maximum Value is : %d \n");


}


int max (int number1, int number2)

{
    int result;

    if (number1>number2)
    result = number1;

    else 
    result = number2;

    return result;
}