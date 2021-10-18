#include <stdio.h>
#include <string.h>
#include "logic.h"

#define MINUS -3
#define TRUE 1
#define FALSE 0

void copy(char *to, const char *from) {
    while (*from != '\0') {
        *to++ = *from++;
    }
    *to = '\0';
}

void printString(char* str) {
    while (*str != '\0') {
        printf("%c", *str++);
    }
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

int RecursiveSum (int num) {
    if (num < 1) {
        return 0;
    }
    return RecursiveSum(num-1) + num;
}

int RecursiveFun(int nA, int nB) {
    int nValue = 1;
    if (nA > 1 && nB > 1) {
        nValue += RecursiveFun(nA - 1, nB - 1);
    } 
    return (nA + nB + nValue);
}

void reverse(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    i--;
    for (int j = 0; j < i; i--, j++) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}

void itoa(int n, char s[]) {
    int i = 0;
    do {
        s[i] = ((n % 10) + '0');
        n /= 10;
        i++;
    } while (n != 0);
    reverse(s);
}

void itob(int n, char s[], int b) {
    int i = 0;
    char temp = 0;
    do {
        temp = n % b;
        n /= b;
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
                temp += '0';
                break;
            default:
                temp = ((temp - 10) + 'A');
                break;
        }
        s[i] = temp;
        i++;
    } while (n != 0);
    reverse(s);
}

void squeeze(char s[], char c) {
    int i = 0;
    int lastPos = 0;
    do {
        while (s[i] == c)
        {
            i++;
        }
        s[lastPos++] = s[i];
    } while (s[i++] != '\0');
}

int any(char s1[], char s2[]) {
    char* pointer = strpbrk(s1, s2);
    int result = pointer - s1 + 1;
    return result;
}

void lower(char s[]) {
    const char differenceLowercaseToUpper = ('A' - 'a');
    for(int i = 0; s[i] != '\0'; i++) {
        if((s[i] >= 'A') && (s[i] <= 'Z'))
            s[i] -= differenceLowercaseToUpper;
    }
}

int getline(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}