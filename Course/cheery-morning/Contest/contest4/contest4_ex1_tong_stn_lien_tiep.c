// contest 4: de quy
// ex1: tinh tong cac so tu nhien lien tiep

#include <stdio.h>

int S(int n) {
	if (n == 0)
		return 0;
	else
		return n + S(n-1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", S(n));
	return 0;
}
