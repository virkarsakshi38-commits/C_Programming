/*
Input : 5

Output : 5 # 4 # 3 # 2 # 1 #
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d  #  ", i);
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