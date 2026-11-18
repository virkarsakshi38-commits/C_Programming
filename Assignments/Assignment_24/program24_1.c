/*
write a program which accept string from user and accept one character. check whether that character is present in string or not 

Input : <arvellous Multi OS
e
Output : True

Input : <arvellous Multi OS
w
Output :False

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the String : ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}
