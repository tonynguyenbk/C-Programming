/* show_matrix_character.c -- program with a */
#include <stdio.h>

void matrix_cr(char cr, int lines, int width);

int main()
{
    int ch;
    int rows, cols;

    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        matrix_cr(ch, rows, cols);
        printf("Enter another character and two integers:\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

void matrix_cr(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');  /* end line and start a new one */
    }
}