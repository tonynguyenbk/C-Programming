// contest 5: mang 1 chieu
// bai 4: so lon hon, nho hon 1 so trong mang

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	int count_bigger = 0;
	int count _smaller = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > x) {
			count_bigger++;
		} else if (a[i] < x) {
			count_smaller++;
		}
	}
	printf("%d %d", count_bigger, count_smaller);
	return 0;
}
