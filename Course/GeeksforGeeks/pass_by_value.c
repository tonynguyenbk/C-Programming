#include <stdio.h>

void f1(int x) {
    x = 30;
}

int main() {
    int x = 20;
    f1(x);
    printf("%d", x);
    return 0;
}