#include <stdio.h>

int main() {
    int choice, num;
    
    printf("Konversi Bilangan\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Pilih operasi (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &num);
            printf("Biner: ");
            // 
            int binary[32];
            int i = 0;
            while (num > 0) {
                binary[i] = num % 2;
                num /= 2;
                i++;
            }
            // Mencetak sisa pembagian dari belakang ke depan
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            break;
            
        // Kasus lainnya belum diubah karena tidak terkait dengan permasalahan urutan
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &num);
            int dec = 0, base = 1;
            while (num > 0) {
                int digit = num % 10;
                dec += digit * base;
                num /= 10;
                base *= 2;
            }
            printf("Desimal: %d", dec);
            break;
            
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &num);
            printf("Octal: %o", num);
            break;
            
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &num);
            printf("Desimal: %d", num);
            break;
            
        default:
            printf("Pilihan tidak valid.");
    }
    
    return 0;
}