//write a program which accept temperature in fahrenheit and convert it into celsius(1 celsius = (-32 fahrenheit))*(5/9)

// Input : 10
// Output : -12.222222   (10 - 32) * (5/9)

// Input : 34
// Output : 1.111111   (34 - 32) * (5/9)

#include<stdio.h>
#include<stdlib.h>

double fhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = fhtoCs(fValue);

    printf("Temperature in celsius is : %lf", dRet);

    return EXIT_SUCCESS;
}