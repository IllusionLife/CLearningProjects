#include <stdio.h>

int main() {
    int iCheckIfOdd;
    printf("Please enter a number:\n");
    scanf("%d", &iCheckIfOdd);

    if (iCheckIfOdd & 1) {
        printf("\nThe number is odd\n");
    }
    else
        printf("\nThe number is even\n");

    return 0;
}