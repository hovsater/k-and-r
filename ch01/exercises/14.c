#include <stdio.h>

#define HISTOGRAM_SIZE 93
#define HISTOGRAM_START '!'
#define HISTOGRAM_END '~'

int main(void)
{
    int c, i, j;
    int histogram_max, histogram[HISTOGRAM_SIZE];

    for (i = 0; i <= HISTOGRAM_SIZE; ++i)
        histogram[i] = 0;

    histogram_max = 0;
    while ((c = getchar()) != EOF) {
        if (c >= HISTOGRAM_START && c <= HISTOGRAM_END) {
            ++histogram[c - HISTOGRAM_START];
            if (histogram[c - HISTOGRAM_START] > histogram_max)
                histogram_max = histogram[c - HISTOGRAM_START];
        }
    }

    for (i = histogram_max; i > 0; --i) {
        for (j = 0; j <= HISTOGRAM_SIZE; ++j) {
            if (histogram[j] >= i) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 0; i <= HISTOGRAM_SIZE; ++i)
        printf("%c ", HISTOGRAM_START + i);
    printf("\n");
}
