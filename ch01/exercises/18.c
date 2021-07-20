#include <stdio.h>

#define MAXLINE 1000

int _getline_trimmed(char line[], int limit);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = _getline_trimmed(line, MAXLINE)) > 0)
        if (line[0] != '\n')
            printf("%s", line);

    return 0;
}

int _getline_trimmed(char line[], int limit)
{
    int c, i, j, k;
    char blanks[MAXLINE];

    i = j = 0;
    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n') {
        if (c == '\t' || c == ' ') {
            blanks[j] = c;
            ++j;
        } else {
            for (k = 0; k < j; k++) {
                line[i] = blanks[k];
                ++i;
            }
            j = 0;
            line[i] = c;
            ++i;
        }
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}
