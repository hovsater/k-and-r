#include <stdio.h>

main()
{
    int c, nwhite;

    nwhite = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;

    printf("white space = %d\n", nwhite);
}
