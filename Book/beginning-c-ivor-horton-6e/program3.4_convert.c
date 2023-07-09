// Program 3.4 Converting uppercase to lowercase
#include <stdio.h>

int main()
{
    char letter = 0;
    printf("Enter an uppercase letter: ");
    sanf("%c", &letter); // Read a character

    // Check whether the input is uppercase
    if (letter >= 'A') // Is it A or greater?
        if (letter <= 'Z')
        {                                // and is it Z or lower?
            letter = letter - 'A' + 'a'; // It is uppercase
            printf("You entered an uppercase %c\n", letter);    // Convert from upper - to lowercase    
        }
        else    // It is not an uppercase letter
            printf("Try using the shift key! I want a capital letter.\n");
    return 0;
}