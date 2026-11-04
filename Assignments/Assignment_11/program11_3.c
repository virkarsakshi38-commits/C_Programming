//write a program which accept range from user and return addition of all numbers in between that range (range should contains positive numbers only)

// Input : 23 30
// Output : 212

// Input : 10 18
// Output : 126

// Input : -10 2
// Output : Invalid range

// Input :90 18
// Output : Invalid range


#include <stdio.h>
#include <stdlib.h>
int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");
        return -1;
    }

    int iSum = 0;
    for(int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }
    return iSum;
}

int main()
{
    int iValue1, iValue2, iRet;

    printf("Enter the starting number: ");
    scanf("%d", &iValue1);

    printf("Enter the ending number: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    if(iRet != -1)
    {
        printf("Addition of numbers in range is : %d", iRet);
    }

    return EXIT_SUCCESS;
    
}