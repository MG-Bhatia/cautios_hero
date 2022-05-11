#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sentence[1000];
    
    FILE *text = fopen("fileh1.txt","w");

    if (text == NULL)
    {
        printf("Cannot create file");
    }
    
    else
    {
        printf("FIle was created without problem \n");
    }

    printf("Enter a short sentence \n");
    fgets(sentence,sizeof(sentence),stdin);
    fprintf(text,"%s",sentence);


    fclose(text);
}