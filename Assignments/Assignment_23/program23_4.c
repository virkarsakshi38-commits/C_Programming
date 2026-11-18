/*
write a program which accept a string from user and display only digits from that string 
Input : marve98llous121
output : 89121

Input : demo
output :
*/


#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf(" %99[^\n]", arr);

    DisplayDigit(arr);

    printf("\n");

    return EXIT_SUCCESS;
}
