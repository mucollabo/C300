#include <stdio.h>

void print_x(int x);
void print_gx(void);

int x = 20;

int main()
{
    int x = 5;
    printf("x = %d\n", x);

    print_x(10);
    print_gx();

    return 0;
}

void print_x(int x)
{
    printf("x = %d\n", x);
}

void print_gx(void)
{
    printf("x = %d\n", x);
}