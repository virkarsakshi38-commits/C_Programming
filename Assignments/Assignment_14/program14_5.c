//write a program which accept number from user and return difference between summation of all its factors and non factors

// Input : 12
// Output : -34 (16 -50 = -34)

// Input : 10
// Output : -29 (13 - 40 = -37)


#include<stdio.h>
#include<stdlib.h>

int Difference(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    return (iSum1 - iSum2);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}