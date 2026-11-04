//write a program which accept number from user and return difference between summation of even digits and summation of odd digits

//Input : 2395
//Output : -15 

//Input : 1018
//Output : 8

//Input : 9440
//Output : 144

//Input : 9922432
//Output : 864

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo/10;
    }
    
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is : %d\n",iRet);

    return EXIT_SUCCESS;
}