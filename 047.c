#include <stdio.h>

int print(char* string);

main()
{
    print("This is a function!");
}

int print(char* string)
{
    int len = 0;

    while(*string != (char)NULL)
    {
        printf("%c", *string);
        string++;
        len++;
    }
    printf("\n문자열의 총 길이 : %d", len);
    return len;
}