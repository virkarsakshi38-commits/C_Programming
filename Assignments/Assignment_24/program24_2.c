/*
write a program which accept string from user and accept one character. 
return frequency of that character 

Input : <arvellous Multi OS
M
Output : 2

Input : <arvellous Multi OS
w
Output :0

*/




#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency of character is : %d\n", iRet);

    return EXIT_SUCCESS;
}

