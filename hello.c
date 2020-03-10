#include <stdio.h>

main()
{
    int i = 0;
    int j = 0;
    for (i = 0; i < 9; i++)
        j++;
    for (i = 0; i < 9; i++)
        j = j + i;

    printf("Hello World, this is Jason Lai\n");
    printf("Hello World, this is Dog 1\n");
    printf("Hello World, this is Dog 2\n");
    printf("Hello World, this is Monster 1\n");
}
