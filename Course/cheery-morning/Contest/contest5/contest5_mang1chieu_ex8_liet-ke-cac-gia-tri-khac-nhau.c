// contest 5: mang 1 chieu
// bai 8: liet ke cac gia tri khac nhau

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		int check = 1;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				check = 0;
				break;
			}
		}
		if (check)
			printf("%d ", a[i]);
	}
	return 0;
}
