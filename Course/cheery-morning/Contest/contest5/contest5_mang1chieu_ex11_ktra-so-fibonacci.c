// contest 5: mang 1 chieu
// bai 11: duyet so fibonacci trong mang

#include <stdio.h>

#define ll long long

ll F[100];

void khoitao() {
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i <= 92; i++) {
		F[i] = F[i-1] + F[i-2];
	}
}

int check(ll n) {
	for (int i = 0; i <= 92; i++) {
		if (F[i] == n)
			return 1;
	}
	return 0;
}

int main() {
	khoitao();
	int n;
	scanf("%d", &n);
	ll a[n];
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	int ok = 0;
	for (int i = 0; i < n; i++) {
		if (check(a[i])) {
			printf("%lld ", a[i]);
			ok = 1;
		}
	}
	if (!ok) printf("NONE\n");
	return 0;
}
