//Problem  statement  accept a single character and detrermine whether it is an uppercase alphabet , 
//lowercase alphabet , digit, or special character  use character comparisons without using library character- classification functions

#include <stdio.h>
#include <stdlib.h>
void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("It is an Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue;

    printf("Enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return 0;
}