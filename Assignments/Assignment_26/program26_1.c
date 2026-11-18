/*
write a program which displays ASCII table. table contains symbol, Decimal
Hexadecimal and representation of every member from 0 to 255
*/


#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Decimal\tHexadecimal\tSymbol\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t\t%c\n", i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
