#include <stdio.h>

int main() {
    int a = 0;
    while (1) {
        while (1) {
            a++;
            if (a > 5) break;
        }
        a++;
        if (a > 100) break;
    }
    printf("%d", a);
    return 0;
}