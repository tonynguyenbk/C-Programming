#include <stdio.h>

int s(int n) {
	if (n == 0)
		return 0;
	else
		return n*n*n + S(n-1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", S(n));
	return 0;
}
