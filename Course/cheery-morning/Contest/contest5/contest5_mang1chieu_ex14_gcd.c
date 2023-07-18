// contest 5: mang 1 chieu
// bai 14: gcd cua mang

#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	ll uoc_chung = 0;
	for (int i = 0; i < n; i++) {
		uoc_chung = gcd(uoc_chung, a[i]);
	}
	printf("%lld", uoc_chung);
	return 0;
}
