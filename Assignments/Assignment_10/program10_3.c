//write a program which accept distance in kilometre and convert it into metre(1 kilometre = 1000 metre)
//Input : 5
//Output :5000

//Input : 12
//Output :12000

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometre : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metre is : %d", iRet);

    return EXIT_SUCCESS;
}
