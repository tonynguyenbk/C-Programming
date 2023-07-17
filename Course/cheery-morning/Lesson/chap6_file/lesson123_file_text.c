#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    f = fopen("000.txt", "a");

    for (int i = 0; i <= 100; i++) {
        fprintf(f, "%d ", i);
    }
    // char c[] = "embedded\n";
    // for (int i = 0; i < strlen(c); i++) {
    //     fputc(c[i], f);
    // }
    
    // fputs(c, f);


    fclose(f);
    return 0;
}