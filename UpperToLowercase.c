#include <stdio.h>

int main() {
    const char differenceUppertoLowercase = ('a' - 'A');
    char s1[40] = "WASSUP";


    for (int i = 0; s1[i] !='\0'; i++) {
        s1[i] += differenceUppertoLowercase;
    }

    printf("%s", s1);
    return 0;
}
