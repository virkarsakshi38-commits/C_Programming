/*
Accept charcter from user. if it is capital then display all the charcters from the input 
characters till Z. it input character is samll then printall the charcters order till a 
in other casses return directly

Input L Q
Output: Q R S T U V W X Y Z


Input m
Output: m l k j i h g f  e d c b a

Input : 8
Output : 
*/


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c ", i);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
