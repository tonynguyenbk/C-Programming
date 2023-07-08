#include <stdio.h>

void f1(int *ptr) {
    *ptr = 30;
}

int main() {
    int x = 20;
    f1(&x);
    printf("%d", x);
    return 0;
}