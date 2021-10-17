#include <stdio.h>
#include "headers\task.h"
#include "headers\f.h"
#include "headers\func.h"
#include "headers\math.h"
#include "headers\removeComments.h"

double triangleArea(int height, int base);
double rectangleArea(int a, int b);

int main() {
       int a = 0;
       int b = 0;
       int c = 0;
       double areaResult = 0.0;
         task 1 & 2
       areaResult = area();
       printf("The resulted area is: %Lf\n", areaResult);

       clearConsole();
          task 3, 4, 5
       printf("Please enter numbers a, b and c:\n");
       scanf("%d %d %d", &a, &b, &c);
       printf("Result from task 3: %d\n", taskThree(a, b));   Task 3  
       printf("Result from task 4: %d\n", taskFour(a, b, c));   Task 4  
       isEven(a);   Task 5  
       clearConsole();

         task 6
       printf("Enter a number to convert to binary:\n");
       int dec = 0;
       scanf("%d", &dec);
       int result = decToBinary(dec);
       printf("Result in binary: %d\n", result);
       clearConsole();

         task 7
       printf("Enter a base and a height for a right triangle:\n");
       int triangleHeight = 0;
       int triangleBase = 0;
       double result = 0.0;
       scanf("%d %d", &triangleBase, &triangleHeight);
       result = triangleArea(triangleHeight, triangleBase);
       printf("Triangle area: %Lf\n", result);
       result = rectangleArea(triangleHeight, triangleBase);
       printf("Rectangle area with sides %d and %d: %Lf\n", triangleHeight, triangleBase, result);
       clearConsole();

         task 8
       a = 3;
       b = 2;
       c = 5;
       printf("Before operations:\n\na = %d\nb = %d\nc = %d\n", a, b, c);
       printf("%d + %d = %d", a, b, add(a, b));
       printf("++%d = %d", c, (c = incr(c)));
       clearConsole();

         task 9
       func1();
       clearConsole();
    
         task 10
       printf("Result of lcm: %d\n", leastCommonMultiple(7, 4));
       printf("Result of absolute(-3.14): %f\n", absolute(-3.14));
       printf("Result of absolute(-3724): %.0f\n", absolute(-3724));
       printf("Result of squareRoot(-3724): %f\n", squareRoot(-3724));
       printf("Result of squareRoot(absolute(-3724)): %f\n", squareRoot(absolute(-3724)));
       clearConsole();

    removeCommentsFromFile("m.c");

    return 0;
}

double triangleArea(int height, int base) {
    return ((0.5 * height) * base);
}

double rectangleArea(int a, int b) {
    return (2 * triangleArea(a, b));
}
