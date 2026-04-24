// Converting a string to uppercase using a
// non-constant pointer to non-constant data.

#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);    // prototype

int main() {
	char greetingHi[] = "HiHeLLo";
	printf("%s\n", greetingHi);
	
	convertToUpperCase(greetingHi);
    
	printf("%s\n", greetingHi);
	return 0;
}

void convertToUpperCase(char *sPtr) {
    while (*sPtr != '\0') {         // current character is not '\0'
        *sPtr = toupper(*sPtr);     // convert to uppercase
        ++sPtr;                     // make sPtr point to the next character
    }
}