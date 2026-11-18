/*
write a program which accept string from user and accept one character. 
return index of last occurrence of that character 

Input : Marvellous Multi OS
M
Output : 11

Input : Marvellous Multi OS
w
Output :-1

Input : Marvellous Multi OS
e
Output :4

*/






#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
        }

        iCount++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter the String : ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return EXIT_SUCCESS;
}



