#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	
	int no_of_year = n / 365;
	n %= 365;
	int no_of_week = n / 7;
	n %= 7;
	printf("%d %d %d", no_of_year, no_of_week, n);
	
	return 0;
}
