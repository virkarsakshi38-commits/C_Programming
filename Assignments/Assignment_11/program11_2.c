//write a program which accept range from user and display all even numbers in between that range 

// Input : 23 35
// Output : 24 26 28 30 32 34

// Input : 10 18
// Output : 10 12 14 16 18

// Input : 10 10
// Output : 10

// Input : -10 18
// Output : -10 -8 -6 -4 -2 0 2 

// Input : 90 18
// Output : Invalid Range 

#include <stdio.h>
#include <stdlib.h>
    void RangeDisplayEven(int iStart, int iEnd)
    {
        if(iStart > iEnd)
        {
            printf("Invalid range");
            return;
        }

        for(int i = iStart; i <= iEnd; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
int main()
{
    int iValue1, iValue2;

    printf("Enter the starting number: ");
    scanf("%d", &iValue1);

    printf("Enter the ending number: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}