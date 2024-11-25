#include <stdio.h>
int main() {
    int a;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);
    if (a < 0) {
        a = -a;
    }
    printf("Cac chu so trong so la: ");
    while (a > 0) {
        printf("%d ", a % 10);
        a /= 10;
    }
    printf("\n");

    return 0;
}
