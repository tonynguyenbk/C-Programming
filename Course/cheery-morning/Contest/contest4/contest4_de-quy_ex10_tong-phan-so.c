/*
	contest 4: de quy
	bai 10: tong phan so
*/

#include <stdio.h>

double tongPhanSo(int n) {
	if (n == 1)
		return 1;
	else
		return 1.0/n + tongPhanSo(n-1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%.3lf", tongPhanSo(n));
	return 0;
}


