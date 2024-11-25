#include <stdio.h>
int main() {
    int so_duoc_doan;
    int so_bi_mat = 4;
    do {
        printf("Nhap vao so ban doan: ");
        scanf("%d", &so_duoc_doan);

        if (so_duoc_doan != so_bi_mat) {
            printf("Sai roi hay thu lai.\n");
        }
    } while (so_duoc_doan != so_bi_mat);

    printf("Chuc mung ban da doan dung.\n");
    return 0;
}
