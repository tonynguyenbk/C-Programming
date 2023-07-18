// contest 5: mang 1 chieu
// bai 5: in ra cac phan tu chan o vi tri chan

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int check = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0 && a[i] % 2 == 0) {
			printf("%d ", a[i]);
			check = 1;
		}
	}
	if(check == 0) printf ("NONE");
	return 0;
}
