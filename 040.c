#include <stdio.h>

main()
{
    int i = 0;
    int j = 1;

    printf("값=%d, 메모리주소=%p\n", i, &i);
    printf("값=%d, 메모리주소=%p\n", j, &j);
}