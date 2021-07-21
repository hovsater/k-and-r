#include <stdio.h>

void detab(int size);

main()
{
    detab(4);
}

void detab(int size)
{
    int c, j, col;

    col = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (j = 0; j < (col - 1) % size; ++j) {
                ++col;
                putchar(' ');
            }
        } else if (c == '\n') {
            col = 1;
            putchar(c);
        } else {
            ++col;
            putchar(c);
        }
    }
}
