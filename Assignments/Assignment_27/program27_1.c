/*
Write a program which accpet string from user and count number of capital charcters.

Input : Marvellous Multi OS
Output : 4

*/

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %99[^\n]", arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters : %d\n", iRet);

    return EXIT_SUCCESS;
}
