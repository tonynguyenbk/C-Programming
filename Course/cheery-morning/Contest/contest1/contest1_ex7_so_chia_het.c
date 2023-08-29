#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int x = a / b * b;
	int y;
	if (a % b == 0)
		y = a;
	else
		y = (a / b + 1) * b;
	printf("%d\n%d", x, y);

	return 0;
}
