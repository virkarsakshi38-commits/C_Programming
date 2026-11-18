/*
accept character from user and check whether it is small case or not (a-z)
Input : g
Output: TRUE

Input : d
Output: FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chksmall(char ch)
{
   if(ch >= 'a' && ch <= 'z')
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = Chksmall(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Digit");
    }
    else
    {
        printf("It Is Not Digit");
    }

    return EXIT_SUCCESS;
}

