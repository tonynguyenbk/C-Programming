#include <stdio.h>

int main() {
	 int n, m;
	 scanf("%d %d", &n, &m);
	 if (n % 2 == 0) {
	 	printf("%d", 1ll*n/2*m);
	 } else {
	 	printf("%d", 1ll*n/2*m + m/2);
	 }
	 
	 return 0;
}
