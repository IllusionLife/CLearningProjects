#include <stdio.h>

#define OUNCE_TO_CUP_RATIO 8

int main() {

    int iOuncesOrdered = 0, iConvertedOuncesToCups = 0;
    printf ("How many ounces would you like to order:\n");
    scanf ("%d", &iOuncesOrdered);

    iConvertedOuncesToCups = iOuncesOrdered / OUNCE_TO_CUP_RATIO;
    printf("\nFor %d ounces you would get %d cups.", iOuncesOrdered, iConvertedOuncesToCups);

    return 0;
}
