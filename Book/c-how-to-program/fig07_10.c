// Converting a string to uppercase using a
// non-constant pointer to non-constant data.

#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);    // prototype

int main() {
	char xinChao[] = "HiHeLLo";
	printf("%s\n", xinChao);
	
	convertToUpperCase(xinChao);
    
	printf("%s\n", xinChao);
	return 0;
}

void convertToUpperCase(char *sPtr) {
    while (*sPtr != '\0') {         // current character is not '\0'
        *sPtr = toupper(*sPtr);     // convert to uppercase
        ++sPtr;                     // make sPtr point to the next character
    }
}