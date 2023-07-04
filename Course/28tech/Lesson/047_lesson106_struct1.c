// struct

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct SinhVien
{
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;

SinhVien nhap()
{
    SinhVien x;
    printf("Nhap ten: "); fgets(x.ten, 100, stdin);
    printf("Nhap lop: "); fgets(x.lop, 100, stdin);
    printf("Nhap diem: "); scanf("%lf", &x.gpa);
    return x;
}

void in(SinhVien x)
{
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int main()
{
    int n;
    scanf("%d", &n);
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        a[i] = nhap();
    }
    printf("Danh sach sinh vien vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    return 0;
}