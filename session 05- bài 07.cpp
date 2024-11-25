#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    printf("Uoc chung lon nhat cua hai so la: %d\n", a);
    return 0;
}
