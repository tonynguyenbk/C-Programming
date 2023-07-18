// tong chan le

#include <stdio.h>

#define ll long long

ll S(int n) {
	if (n == 0)
		return 0;
	else {
		if (n % 2 == 0)
			return n + S(n-1);
		else
			return -n + S(n-1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", S(n));
	return 0;
}
