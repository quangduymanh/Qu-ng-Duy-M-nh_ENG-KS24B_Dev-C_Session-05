#include <stdio.h>
int main() {
    int n, tong = 0;
    do {
        printf("Nhap so nguyen duong: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; i <= n; i++) tong += i;
    printf("Tong tu 1 den %d la: %d\n", n, tong);
    return 0;
}


