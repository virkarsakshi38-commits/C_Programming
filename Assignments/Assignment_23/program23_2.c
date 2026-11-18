/*write a program which accept string from user and convert it into UPPERCASE
Input : Marvellous Multi OS

Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>
#include<string.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }

}

int main()
{
    char arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}