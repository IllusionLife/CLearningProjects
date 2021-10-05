

#include <stdio.h>

void selectA() {
    for (int i = 0; i < 6; i++) {
        int y = 0;
        while (y < i * 2) {
            printf("  ");
            y+=2;
        }
        for (y; y < 22-(i * 2); y++) {
            printf("%c", y % 2 ? '#' : ' ');
        }
        printf("\n");
    }
}

void selectB() {
    for (int i = 6; i > 0; i--) {
        int y = 0;
        while (y < i * 2-2) {
            printf("  ");
            y+=2;
        }
        for (y; y <= 24-(i * 2); y++) {
            printf("%c", y % 2 ? '#' : ' ');
        }
        printf("\n");
    }
}

void selectC() {
    for (int i = 6; i > 0; i--) {
        int y = 0;
        while (y < i * 2) {
            printf("  ");
            y+=2;
        }
        for (y; y < 22-(i * 2); y++) {
            printf("%c", y % 2 ? '#' : ' ');
        }
        printf("\n");
    }
    for (int i = 0; i < 6; i++) {
        int y = 0;
        while (y < i * 2) {
            printf("  ");
            y+=2;
        }
        for (y; y < 22-(i * 2); y++) {
            printf("%c", y % 2 ? '#' : ' ');
        }
        printf("\n");
    }
}

int main() {

    selectA();
    printf("\n--------------------------------------------\n");
    selectB();
    printf("\n--------------------------------------------\n");
    selectC();
   return 0;
}
