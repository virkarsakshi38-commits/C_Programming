/*
Input : 5

Output : A B C D E
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {
        printf("%c  ", ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}