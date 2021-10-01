#include <stdio.h>

int main() {

    int iOuncesOrdered = 0, iConvertedOuncesToCups = 0;
    printf ("How many ounces would you like to order:\n");
    scanf ("%d", &iOuncesOrdered);

    iConvertedOuncesToCups = iOuncesOrdered / 8;
    printf("\nFor %d ounces you would get %d cups.", iOuncesOrdered, iConvertedOuncesToCups);

    return 0;
}
