// xay dung chuong trinh quan ly sinh vien kieu menu

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;

void nhap(SinhVien *x) {
    printf("Nhap ten: "); gets(x->ten);
    printf("Nhap lop: "); gets(x->lop);
    printf("Nhap gpa: "); scanf("%lf", &x->gpa);
    return x;
}

void in(SinhVien x) {
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

// Sap xep, tim kiem, tim min, max, trung binh,...
void timKiem(SinhVien a[], int n, char name[]) {
    int find = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(name, a[i].ten) == 0) {
            in(a[i]);
            find = 1; // tim thay
        }
    }
    if (!find)
        printf("Khong tim thay sinh vien!\n");
}

// In ra nhung sinh vien co diem gpa cao nhat
void maxGpa(SinhVien a[], int n) {
    double max = 0;
    for (int i = 0; i < n; i++) {
        max = fmax(max, a[i].gpa);
    }
    printf("Thong tin cac sinh vien co diem gpa cao nhat:\n");
    for (int i = 0; i < n; i++) {
        if (max == a[i].gpa) {
            in(a[i]);
        }
    }
}

// Sap xep sinh vien theo gpa giam dan
void sapXep(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (a[max].gpa < a[j].gpa)
                max = j;
        }
        SinhVien temp = a[max];
        a[max] = a[i];
        a[i] = temp;
    }
}

int main() {
    SinhVien a[1000];
    int n;
    while (1) {
        printf("----------------QLSV----------------\n\n");
        printf("1. Nhap danh sach sinh vien:\n");
        printf("2. Hien thi danh sach sinh vien:\n");
        printf("3. Tim kiem sinh vien theo ten:\n");
        printf("4. Liet ke sinh vien co diem cao nhat:\n");
        printf("5. Xoa sinh vien theo ten\n");
        printf("6. Sap xep sinh vien theo gpa giam dan\n");
        printf("0. Thoat!\n");
        printf("-------------------------------------\n\n");
    }
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        getchar();
        nhap(&a[i]);
    }
    printf("Danh sach sinh vien vua nhap:\n");
    for (int i = 0; i < n; i++) {
        in(a[i]);
    }
    return 0;
}