#include <stdio.h>

int main() {

    char s1[] = "Hello";
    int i = 0;
    while (s1[i] != '\0') {
        if(s1[i] == 'l') {
            s1[i] = 'x';
        }
        i++;
    }
    printf("%s", s1);
    return 0;
}
