#include <stdio.h>
#include <conio.h>
#include "headers\task.h"

const double PI = 3.14;

// task 1
double circleArea(double radius) {
    double result = (PI * radius) * radius;
    return result;
}

// task 2
double area() {
    double rad = 0;
    printf("Please enter a radius:\n");
    scanf("%Lf", &rad);
    return circleArea(rad);
}

// task 3
int taskThree (int a, int b) {
    return ((a + b) * 4);
}

// task 4
int taskFour (int a, int b, int c) {
    return ((a * 2) + (b * c));
}

// task 5
void isEven (int num) {
    num & 1 ? printf("%d is even.", num) : printf("%d is not even.", num);
}

//task 6
int decToBinary (int num) {
    int result = 0;
    int remainder = 0;
    for (int i = 1; num != 0; i*=10)
    {
        remainder = num % 2;
        num /= 2;
        result += (remainder * i);
    }
    return result;
}


void clearConsole() {
    printf("Press any key to clear console");
    getch();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}