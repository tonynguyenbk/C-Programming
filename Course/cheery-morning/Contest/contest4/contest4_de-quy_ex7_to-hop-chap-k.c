// contest 4: de quy
// bai 7: to hop chap k cua n

#include <stdio.h>

int tohop(int n, int k) {
	if (k == 0 || n == k)
		return 1;
	else
		return tohop(n-1, k) + tohop(n-1, k-1);
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", tohop(n,k));
	return 0;
}
