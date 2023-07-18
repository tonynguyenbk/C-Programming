// contest 4: de quy
// bai 9: luy thua nhi phan
// phai tim hieu ly thuyet ve dong du truoc khi lam bai nay

#include <stdio.h>

#define ll long long

const int mod = 1000000007;

ll binpow(ll a, ll b) {
	if (b == 0)
		return 1;
	ll temp = binpow(a, b/2);
	if (b % 2 == 1)
		return ((temp % mod) * (temp % mod)) % mod * (a % mod) % mod;
	else
		return (temp % mod) * (temp % mod) % mod;
}

int main() {
	ll a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", binpow(a,b));
	return 0;
}
