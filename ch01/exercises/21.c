#include <stdio.h>

void entab(int size);

main()
{
    entab(4);
}

void entab(int size)
{
    int c, i, col, ns, nt, tg;

    ns = 0;
    nt = 0;
    tg = 0;
    for (col = 1; (c = getchar()) != EOF; ++col) {
        if (c == ' ') {
            ++ns;
            if (col % size == 0) {
                ++nt;
                tg = ns;
            }
        } else if (c == '\n') {
            col = 0;
            putchar(c);
        } else {
            if (nt > 0 && ns > 1) {
                for (i = 0; i < nt; ++i)
                    putchar('\t');
                for (i = 0; i < ns - tg; ++i)
                    putchar(' ');
            } else {
                for (i = 0; i < ns; ++i)
                    putchar(' ');
            }

            putchar(c);

            ns = 0;
            nt = 0;
            tg = 0;
        }
    }
}
