#include <stdio.h>
#include <math.h>

// tinh toan luy thua thong thuong
long long lt1(int a, int b)
{
    long long res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}

// luy thua nhi phan
long long lt2(int a, int b)
{
    long long res = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    return res;
}

int main()
{
    printf("%lld\n", lt1(2, 10));
    printf("%lld", lt2(2, 10));
}