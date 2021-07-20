#include <stdio.h>

main()
{
    /* printf("with \\0 \0\n"); format string contains '\0' within the string body [-Werror,-Wformat] */
    printf("with \\1 \1\n");
    printf("with \\2 \2\n");
    printf("with \\3 \3\n");
    printf("with \\4 \4\n");
    printf("with \\5 \5\n");
    printf("with \\5 \5\n");
    printf("with \\6 \6\n");
    printf("with \\7 \7\n");
    /* printf("with \\8 \8\n"); error: unknown escape sequence '\8' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\9 \9\n"); error: unknown escape sequence '\9' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\c \c\n"); error: unknown escape sequence '\c' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\d \d\n"); error: unknown escape sequence '\d' [-Werror,-Wunknown-escape-sequence] */
    printf("with \\e \e\n");
    printf("with \\f \f\n");
    /* printf("with \\g \g\n"); error: unknown escape sequence '\g' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\h \h\n"); error: unknown escape sequence '\h' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\i \i\n"); error: unknown escape sequence '\i' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\j \j\n"); error: unknown escape sequence '\j' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\k \k\n"); error: unknown escape sequence '\k' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\l \l\n"); error: unknown escape sequence '\l' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\m \m\n"); error: unknown escape sequence '\m' [-Werror,-Wunknown-escape-sequence] */
    printf("with \\n \n\n");
    /* printf("with \\o \o\n"); error: unknown escape sequence '\o' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\p \p\n"); error: unknown escape sequence '\p' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\q \q\n"); error: unknown escape sequence '\q' [-Werror,-Wunknown-escape-sequence] */
    printf("with \\r \r\n");
    /* printf("with \\s \s\n"); error: unknown escape sequence '\s' [-Werror,-Wunknown-escape-sequence] */
    printf("with \\t \t\n");
    /* printf("with \\u \u\n"); */
    printf("with \\v \v\n");
    /* printf("with \\w \w\n"); */
    /* printf("with \\x \x\n"); error: \x used with no following hex digits */
    /* printf("with \\y \y\n"); error: unknown escape sequence '\y' [-Werror,-Wunknown-escape-sequence] */
    /* printf("with \\z \z\n"); error: unknown escape sequence '\z' [-Werror,-Wunknown-escape-sequence] */
}
