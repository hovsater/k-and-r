#include <stdio.h>

main()
{
    int c, r;

    r = (c = getchar()) != EOF;
    if (r == 1) {
        printf("(c = getchar()) != EOF is 1\n");
    } else if (r == 0) {
        printf("(c = getchar()) != EOF is 0\n");
    } else {
        printf("(c = getchar()) != EOF is something else\n");
    }
}
