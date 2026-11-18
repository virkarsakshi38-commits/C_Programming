/*
write a program which accept string from user reverse that string in place

Input : abcd

Output : dcba

Input : abba

Output :abba

*/




#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int i = 0, j = 0;
    char temp = '\0';

    while(str[j] != '\0')
    {
        j++;
    }

    j--;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is : %s\n", str);
}

int main()
{
    char arr[100];

    printf("Enter the String : ");
    scanf(" %99[^\n]", arr);

    StrRevX(arr);

    return EXIT_SUCCESS;
}