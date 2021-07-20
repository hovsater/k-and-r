#include <stdio.h>

#define ON 1
#define OFF 0

main()
{
    int c, state;

    state = OFF;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == OFF) {
                state = ON;
                putchar('\n');
            }
        } else {
            state = OFF;
            putchar(c);
        }
}
