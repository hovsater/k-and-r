#include <stdio.h>

#define HISTOGRAM_SIZE 10

main()
{
    int c, i, j, wc;
    int histogram[HISTOGRAM_SIZE], histogram_max;

    for (i = 0; i < HISTOGRAM_SIZE; ++i)
        histogram[i] = 0;

    wc = histogram_max = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wc > 0) {
                if (wc > HISTOGRAM_SIZE)
                    wc = HISTOGRAM_SIZE;

                ++histogram[wc - 1];
                if (histogram[wc - 1] > histogram_max)
                    histogram_max = histogram[wc - 1];
                wc = 0;
            }
        } else {
            ++wc;
        }
    }

    for (i = histogram_max; i > 0; --i) {
        for (j = 0; j < HISTOGRAM_SIZE; ++j) {
            if (histogram[j] >= i) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < HISTOGRAM_SIZE - 1; ++i)
        printf("%d ", i + 1);
    printf("%d+", HISTOGRAM_SIZE);
    printf("\n");
}
