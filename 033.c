#include <stdio.h>

main()
{
    int i;
    int j;

    for(i = 2; i <= 9; i++)
    {
        for(j =1; j <= 9; j++)
        {
            printf("%d * %d = %2d\n", i, j, i * j);
        }
    }
}