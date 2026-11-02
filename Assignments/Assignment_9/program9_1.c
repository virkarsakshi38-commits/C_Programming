//Write a program which accepts a number from the user and displays the below pattern.
//Input: 5
//Output:  * * * * * # # # # #

// Input: 6
// Output:  * * * * * * # # # # # # #

// Input: -5
// Output: * * * * * # # # # #

// Input: 2
// Output:  * * # #





#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
int iCnt = 0;

if(iNo < 0)
{
    iNo = -iNo;
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("*\t");
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("#\t");
}

}

int main()
{
int iValue = 0;

printf("Enter number: ");
scanf("%d", &iValue);

Display(iValue);

return EXIT_SUCCESS;
}