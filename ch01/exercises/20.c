#include <stdio.h>

void detab(int size);

main()
{
    detab(4);
}

void detab(int size)
{
    int c, i, j;

    i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (j = (size - (i % size)); j > 0; --j) {
                putchar(' ');
                ++i;
            }
        } else if (c == '\n') {
            putchar(c);
            i = 0;
        } else {
            putchar(c);
            ++i;
        }
    }
}
