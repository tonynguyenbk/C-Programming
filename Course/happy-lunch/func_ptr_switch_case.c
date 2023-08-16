#include <stdio.h>

void add(int a, int b) {
    printf("%d", a + b);
}

void sub(int a, int b) {
    printf("%d", a - b);
}

void mul(int a, int b) {
    printf("%d", a * b);
}

void div(int a, int b) {
    printf("%.2lf", a * 1.00 / b);
}

int main() {
    
    void (*func_ptr_arr[])(int, int) = {add, sub, mul, div};
    unsigned int ch, a = 15, b = 10;

    printf("Enter choice: 0 for add, 1 for sub, 2 for mul, 3 for div\n");
    scanf("%d", &ch);

    if (ch > 3) return 0;
    else func_ptr_arr[ch](a, b);
    
    return 0;
}