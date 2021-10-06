#include <stdio.h>

const double pi = 3.14159265359;

double circleArea(float radius) {
    return radius * radius * pi;
}

int main() {
    float rad = 0.0;
    printf("Enter the radius of your circle: ");
    scanf("%f", &rad);
    printf("The area of a circle with a radius of %.2f is: %f", rad, circleArea(rad));

    return 0;
}
