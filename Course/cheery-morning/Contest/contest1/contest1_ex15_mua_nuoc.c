#include <stdio.h>

int main() {
	long long n, a, b;	// a: don gia chai 1l, b: don gia chai 2l
	scanf("%lld %lld %lld", &n, &a, &b);
	
	if (a * 2 <= b)	// TH1:don gia chai 1l nho hon don gia chai 2l 
		printf("%lld", n * a);
	else {	// TH2: don gia chai 1l lon hon don gia chai 2l
		if (n % 2 == 0)	// so luong chai 2l, 1l phu thuoc n (chan or le)
			printf("%lld", n /2 * b);
		else
			printf("%lld", n / 2 * b + a);
	}
	
	return 0;
}
