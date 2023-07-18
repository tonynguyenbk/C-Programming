// tinh giai thua

#include <stdio.h>

int gt(n) {
	if (n == 0) 
		return 1;
	else
		return n * gt(n-1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", gt(n));
	return 0;
}
