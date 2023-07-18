// contest 5: mang 1 chieu
// bai 15: tim so lon thu 1 va so lon thu 2 trong mang

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max1 = -1e9;
	int max2 = -1e9;
	for (int i = 0; i < n; i++) {
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		} else if (a[i] > max2) {
			max2 = a[i];
		}
	}
	printf("%d %d", max1, max2);
}
