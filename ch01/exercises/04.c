#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int celsius;

    printf("Celsius-Fahrenheit table\n");
    printf("------------------------\n");
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
        printf("%3d %6.1f\n", celsius, celsius / (5.0 / 9.0) + 32);
}
