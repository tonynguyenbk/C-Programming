// contest 5: mang 1 chieu
// bai 6: tim cap so co tong bang k

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] + a[j] == k) {
				++count;
				}
		}
	}
	printf("%d", count);
	return 0;
}
