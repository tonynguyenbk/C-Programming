#include <stdio.h>

int main() {
	int month, year;
	scanf("%d %d", &month, &year);
	if (month >= 1 && month <= 12 && year > 0) {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("31\n");
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			printf("30\n");
		else {
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				printf("29\n");
			else
				printf("28\n");
		}
	} else
		printf("INVALID\n");
	
	return 0;
}
