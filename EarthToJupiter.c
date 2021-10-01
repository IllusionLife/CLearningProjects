#include <stdio.h>

int main() {
    unsigned int iDaysOnEarth = 0;
    double dConvertedEarthDaysToJupiterYears = 0.0;

    printf ("How many days on Earth would you like to convert to Jupiter years?\n");
    scanf ("%d", &iDaysOnEarth);

    dConvertedEarthDaysToJupiterYears =  iDaysOnEarth / 4383;
    printf("%d days on Earth are equal to %lf years on Jupiter.", iDaysOnEarth, dConvertedEarthDaysToJupiterYears);

    return 0;
}
