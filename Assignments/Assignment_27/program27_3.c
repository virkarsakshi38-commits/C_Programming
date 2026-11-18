/*
Write a program which accept string from user and return differnce between frequency 
of small characters and frequency of capital characters

Input : Marvellous
Output : 6 (8-2)


*/


#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter String : ");
    scanf(" %99[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
