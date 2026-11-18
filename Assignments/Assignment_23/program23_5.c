/*
write a program which accept a string from user and count number of white spaces 

Input : MarvellouS
output : 0

Input : Marvellous Infosystems
output : 1

Input : Marvellous Infosystems By Piyush Manohar Khainar
output : 5
*/



#include<stdio.h>
#include<stdlib.h>

void CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    printf("Number of white spaces : %d", iCount);
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf(" %99[^\n]", arr);

    CountWhite(arr);

    printf("\n");

    return EXIT_SUCCESS;
}

