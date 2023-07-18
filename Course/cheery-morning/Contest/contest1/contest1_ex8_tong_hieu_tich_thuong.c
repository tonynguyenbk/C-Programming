#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int tong = a + b;
	int hieu = a - b;
	long long tich = 1ll * a * b;
	printf("%d\n%d\n%lld\n", tong, hieu, tich);
	if (b == 0)
		printf("INVALID\n");
	else {
		double thuong = (double)a / b;
		printf("%.4lf\n", thuong);
	}
		
	return 0;
}
