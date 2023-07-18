// contest 5: mang 1 chieu
// bai 12 : vi tri so lon nhat nho nhat (cach 2)

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int min = 1e9;
	int max = -1e9;
	int min_pos = 0;
	int max_pos = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= min) {
			min = a[i];
			min_pos = i;
		}			
		if (a[i] > max) {
			max = a[i];
			max_pos = i;
		}	
	}
	printf("%d %d", min_pos, max_pos);
	return 0;
}
