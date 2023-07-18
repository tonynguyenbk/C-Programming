#include <stdio.h>

int main() {
	int n, u1, d;
	scanf("%d %d %d", &n, &u1, &d);
	long long un = u1 + 1ll*(n-1)*d;
	long long S = n * (u1+un)/2;
	printf("%lld", S);
	return 0;
}
