#include <stdio.h>

int main() {
    int a, b, c, bb;
    
    do {
        printf("\nMENU\n1. Nhap 3 so\n2. Tong 3 so\n3. Trung binh cong\n4. So nho nhat\n5. So lon nhat\n6. Thoat\nLua chon: ");
        scanf("%d", &bb);

        if (bb == 1) {
            printf("Nhap 3 so: ");
            scanf("%d %d %d", &a, &b, &c);
        } 
        else if (bb == 2) {
            printf("Tong 3 so: %d\n", a + b + c);
        } 
        else if (bb == 3) {
            printf("Trung binh cong: %.2f\n", (a + b + c) / 3.0);
        } 
        else if (bb == 4) {
            int min = (a < b && a < c) ? a : (b < c ? b : c);
            printf("So nho nhat: %d\n", min);
        } 
        else if (bb == 5) {
            int max = (a > b && a > c) ? a : (b > c ? b : c);
            printf("So lon nhat: %d\n", max);
        }
    } while (bb != 6);

    return 0;
}

