#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = _getline(line, MAXLINE)) > 0)
        if (len > THRESHOLD)
            printf("%d, %s", len, line);
    return 0;
}

int _getline(char s[], int lim)
{
    int c, i, j;

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
