#include <stdio.h>

int main() {
    float a, b;
    int luachon;
    do {
        printf("Nhap hai so a va b: ");
        scanf("%f %f",&a,&b);
        printf("\nMAY TINH\n1.Tong\n2.Hieu\n3.Tich\n4.Thuong\n5.Thoat\nLua chon: ");
        scanf("%d",&luachon);
        switch (luachon) {
            case 1: printf("Tong: %.2f\n", a + b); break;
            case 2: printf("Hieu: %.2f\n", a - b); break;
            case 3: printf("Tich: %.2f\n", a * b); break;
            case 4: 
                if (b != 0) 
				printf("Thuong: %.2f\n", a / b); 
                else printf("Khong the chia cho 0!\n");
                break;
            case 5: printf("Thoat\n"); break;
            default: printf("Lua chon sai!\n");
        }
    } while (luachon != 5);

    return 0;
}
