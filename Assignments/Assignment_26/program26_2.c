/*
Accept charcter from user if character is small display its corresponding capital character, and if it small then display
its corresponding capital in other cases dsiplay ax it is 


Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/



#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("%c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
