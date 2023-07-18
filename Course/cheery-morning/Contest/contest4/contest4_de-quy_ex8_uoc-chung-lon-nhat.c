// contest 4: de quy
// bai 8: uoc chung lon nhat - gcd, boi chung nho nhat - lcm

#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b,a%b);
}
ll lcm(ll a, ll b) {
	return (a*b)/gcd(a,b);
}

int main() {
	ll a, b;
	scanf("%d %d", &a, &b);
	printf("%lld %lld", gcd(a,b), lcm(a,b));
	return 0;
}
