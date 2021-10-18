#include <stdio.h>
#include "taskStart.h"
#include "logic.h"

void startTask1() {
    char* test = "Hello World!\n";
    printString(test);

}

void startTask2() {
    startTask3(); // starts task 3 instead, as task 3 optimizes task 2

}

void startTask3() {
    char* test1 = "1 - 138.2035465987";
    char* test2 = "2 -123.0";
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
}

void startTask4() {
    const char *from = "abcdef";
    char to[16];
    copy(to, from);
    printf("%s\n", to);
}

void startTask5() {
    printf("RecursiveFun: %d\n", RecursiveFun(5, 7));
}


void startTask6() {
    printf("Recursive sum of 30: %d\n", RecursiveSum(30));
}
void startTask7() {
    startTask6(); // made the previous function recursive without checking this task
}

void startTask8() {
    char testChar[] = "Hello World!";
    reverse(testChar);
    printf("%s\n", testChar);
}

void startTask9() {
    int a = 123;
    char itoaString[16];
    itoa(a, itoaString);
    printf("Result: %s\n", itoaString);
}

void startTask10() {
    int num = 123;
    int base = 16;
    char itobString[16] = "";
    itob(num, itobString, base);
    printf("Result: %s\n", itobString);
}

void startTask11() {
    char sentenceString[] = "Hello there, General Kenobi!\n";
    char removeLetter = 'e';
    squeeze(sentenceString, removeLetter);
    printf("%s", sentenceString);
}

void startTask12() {
    char sentence1[] = "Hello There!\n";
    char sentence2[] = "General Kenobi.\n";
    int res = any(sentence1, sentence2);
    printf("The character from sentence1, that first occurs in sentence2 as well is in position %d and is the character: %c\n", res, sentence1[res-1]);
}

void startTask13() {
    char str[] = "TESTING sentence!";
    printf("Starting sentence: %s\n", str);
    lower(str);
    printf("After uncapitalization: %s\n", str);
}

void startTask14() {
    char str[] = "This sentence is 36 characters long.";
    int len = getline(str);
    printf("This sentence has %d characters.\n", len);
}