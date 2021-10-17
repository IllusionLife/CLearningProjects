#include <math.h>
#include "headers\math.h"

int leastCommonMultiple(int a, int b) {
    while (a % b != 0) {
        if (a > b)
        {
            a += a;
        }
        else
        {
            b += b;
        }
    }
    return a;
}

float absolute(float a) {
    if (a < 0.0)
    {
        a *= -1;
    }
    return a;
}

double squareRoot(int num) {
    if (num < 0)
    {
        return -1;
    }
    return sqrt(num);
}