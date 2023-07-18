// contest 5: mang 1 chieu
// bai 16: tong hop

#include <stdio.h>
#include <math.h>

int nt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}

int tn(int n)
{
	int lat = 0, temp = n;
	while (n)
	{
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return lat == temp;
}

int cp(int n)
{
	int can = sqrt(n);
	return can * can == n;
}

int tongnt(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (nt(sum))
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	for (int i = 0; i < n; i++)
	{
		if (nt(a[i]))
			++c1;
		if (tn(a[i]))
			++c2;
		if (cp(a[i]))
			++c3;
		if (tongnt(a[i]))
			++c4;
	}
	printf("%d\n%d\n%d\n%d\n", c1, c2, c3, c4);

	return 0;
}
