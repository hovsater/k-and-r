#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_celsius(int f);

main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, fahr_to_celsius(fahr));
}

float fahr_to_celsius(int f)
{
    return (5.0 / 9.0) * (f - 32);
}
