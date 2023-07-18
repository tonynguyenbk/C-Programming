#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);
	if (c == 'z' || c == 'Z')
		printf("a");
	else if ( c >= 'A' && c <= 'Z') {
		c += 32 + 1;
		printf("%c", c);
	} else {
		c += 1;
		printf("%c", c);
	}
	
	return 0;
}
