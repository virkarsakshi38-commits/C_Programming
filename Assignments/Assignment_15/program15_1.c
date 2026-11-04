//write a program which accpet name from user and print that name 

// Input : "Sakshi Virkar"
// Output : "Sakshi Virkar"   

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[20];

    printf("Enter your name : ");
    scanf("%[^'\n']s",str);

    printf("Your name is : %s\n",str);

    return EXIT_SUCCESS;
}