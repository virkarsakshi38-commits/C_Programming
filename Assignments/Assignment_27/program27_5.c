/*
write a program wgich accept string from user and display it in reverse order

Input: MarvellouS

Output : SuollevraM
*/


#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    for(iCnt = iCnt - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%19s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
