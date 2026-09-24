#include <stdio.h>

int main() {
    int n;
    int a[100]; 
    
    printf("Nhap vao so luong phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
	printf("\n");
    int tong_chan = 0, dem_chan = 0;
    int tong_le = 0, dem_le = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tong_chan += a[i];
            dem_chan++;
        } else {
            tong_le += a[i];
            dem_le++;
        }
    }
   
    printf("\n--- Cau a ---\n");
    if (dem_chan > 0) {
        printf("Trung binh cong cac so chan: %.2f\n", (float)tong_chan / dem_chan);
    } else {
        printf("Khong co so chan trong mang.\n");
    }
    
    if (dem_le > 0) {
        printf("Trung binh cong cac so le: %.2f\n", (float)tong_le / dem_le);
    } else {
        printf("Khong co so le trong mang.\n");
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
   
    printf("\n--- Cau b ---\n");
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
   
    printf("\n");

    int tongduong_c = 0;
    int tongam = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            tongduong_c += a[i];
        } else if (a[i] < 0) {
            tongam += a[i];
        }
    }
    printf("\n--- Cau c ---\n");
    printf("Tong cac so duong la: %d\n", tongduong_c);
    printf("Tong cac so am la: %d\n", tongam);

    float tbc;
    int tongduong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] % 3 == 0) {
            tongduong += a[i];
            dem++;
        }
    }
    printf("\n--- Cau d ---\n");
    if (dem > 0) {
        tbc = (float)tongduong / dem;
        printf("Trung binh cong cac so duong chia het cho 3: %.2f\n", tbc);
    } else {
        printf("Khong co so duong nao chia het cho 3.\n");
    }

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("\n--- Cau e ---\n");
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}
