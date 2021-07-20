#include <stdio.h>

main()
{
    int c, pc;

    pc = EOF;
    while ((c = getchar()) != EOF) {
        if (c != ' ' || pc != ' ') {
            putchar(c);
            pc = c;
        }
    }
}
