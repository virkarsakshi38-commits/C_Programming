//Write a program which accept area in square feet and convert it into square meter(1 square feet = 0.0929 square meter)

//Input : 5
//Output : 0.464515

//Input : 7
//Output : 0.6503

#include<stdio.h>
#include<stdlib.h>

double sftoMs(float sArea)
{
    double dMeter = 0.0;
    dMeter = sArea * 0.0929;
    return dMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%f", &fValue);

    dRet = sftoMs(fValue);

    printf("Area in square meter is : %lf", dRet);

    return EXIT_SUCCESS;
}