#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("000.txt", "r");
    if (f == NULL) {
        printf("Can not open file!\n");
        return 0;
    } else {
        fseek(f, 5, SEEK_SET);
        fseek(f, 3, SEEK_CUR);
        printf("%d", ftell(f));
    }

    fclose(f);
    return 0;
}