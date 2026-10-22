#include<stdio.h>
#include<stdlib.h>
// input 80 -> Bill = 400.00
//150 -> Bill = 850.00
//250 -> Bill = 1700.00
  void CalculateElectricityBill(int iUnits)
  {
      
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f\n", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f\n", fBill);
    }
}
  

int main()
{
    int iUnits;

    printf("Enter the number of units consumed: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}