#include <stdio.h>

const double pi = 3.14159265359;

void circleArea() {
    float radius = 0.0;
    printf("\nEnter the radius of your circle: ");
    scanf("%f", &radius);
    printf("The area of a circle with a radius of %.2f is: %f\n", radius , (radius*radius*pi));
}

double ellipseArea() {
    float sideA = 0.0, sideB = 0.0;
    printf("\nEnter side A: ");
    scanf("%f", &sideA);
    printf("Enter side B: ");
    scanf("%f", &sideB);
    printf("The area of an ellipse with sides  %.2f and %.2f is: %f\n", sideA, sideB , (sideA*sideB*pi));
}

int main() {

    char selection = 0;
    do {
        printf("\nPlease select an operation:\n");
        printf("1. Calculate circle area\n");
        printf("2. Calculate ellipse area\n");
        printf("0. Exit program\n");
        scanf("%d", &selection);
        if (selection == 1) {
            circleArea();
        }
        else if (selection == 2) {
            ellipseArea();
        }
        else {
            break;
        }
        printf("\nWould you like to continue?\n");
        printf("0. No\n");
        printf("1. Yes\n");
        scanf("%d", &selection);
    } while (selection != 0);

    return 0;
}
