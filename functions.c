#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("5 + 3 = %d\n", add(5, 3));
    return 0;
}
