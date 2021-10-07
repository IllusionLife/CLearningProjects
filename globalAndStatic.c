#include <stdio.h>

int global = 0;

void test() {
    static int a = 0;
    printf("Global %d\n", ++global);
    printf("Static %d\n", ++a);

}

int main() {
    test();
    test();
}
