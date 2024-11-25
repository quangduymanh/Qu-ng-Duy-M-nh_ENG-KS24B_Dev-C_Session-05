#include <stdio.h>
int main() {
    int a, b, p_a, p_b;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);
    p_a = a;
    p_b = b;
    while (p_b != 0) {
        int t = p_b;
        p_b = p_a % p_b;
        p_a = t;
    }
    int bcnn = (a * b) / p_a;
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
    return 0;
}
