#define FALSE 0
#define TRUE 1
#define MINUS -3

double atof(char* str);

int main() {
    char* test1 = "1 - 138.2035465987";
    char* test2 = "2 - -123.0";
    char* test3 = "3 - -0.267138";
    double sum1 = 0.0;
    double sum2 = 0.0;
    double sum3 = 0.0;
    sum1 = atof(test1);
    sum2 = atof(test2);
    sum3 = atof(test3);
    printf("Result: %.10Lf\n", sum1);
    printf("Result: %.10Lf\n", sum2);#include <stdio.h>

#define FALSE 0
#define TRUE 1
#define MINUS -3

double atof(char* str);

int main() {
    char* test1 = "1 - 138.2035465987";
    char* test2 = "2 - -123.0";
    char* test3 = "3 - -0.267138";
    double sum1 = 0.0;
    double sum2 = 0.0;
    double sum3 = 0.0;
    sum1 = atof(test1);
    sum2 = atof(test2);
    sum3 = atof(test3);
    printf("Result: %.10Lf\n", sum1);
    printf("Result: %.10Lf\n", sum2);
    printf("Result: %.10Lf\n", sum3);
    return 0; 
}

double atof(char* str) {
    double result = 0.0;
    double decimal = 0.0;
    int isNegative = FALSE;
    while (*str != '.') {
        char temp = (*str++ - '0');
        switch (temp)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                result *= 10.0;
                result += temp;
                break;
            case MINUS:
                isNegative = TRUE;
                break;
            default:
                result = 0.0;
                isNegative = FALSE;
                break;
        }
    }
    result = isNegative ? -result : result;
    str++;
    for (double i = 0.1; *str != '\0'; i*=0.1) {
        char temp = (*str++ - '0');
        decimal = decimal + (temp * i);
    }
    result = isNegative ? (result + (-decimal)) : (result + decimal);
    return result;
}
    printf("Result: %.10Lf\n", sum3);
    return 0; 
}

double atof(char* str) {
    double result = 0.0;
    double decimal = 0.0;
    int isNegative = FALSE;
    while (*str != '.') {
        char temp = (*str++ - '0');
        switch (temp)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                result *= 10.0;
                result += temp;
                break;
            case MINUS:
                isNegative = TRUE;
                break;
            default:
                result = 0.0;
                isNegative = FALSE;
                break;
        }
    }
    result = isNegative ? -result : result;
    str++;
    for (double i = 0.1; *str != '\0'; i*=0.1) {
        char temp = (*str++ - '0');
        decimal = decimal + (temp * i);
    }
    result = isNegative ? (result + (-decimal)) : (result + decimal);
    return result;
}
