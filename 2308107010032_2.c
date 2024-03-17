#include <stdio.h>
#include <stdbool.h>

bool is_tahun_kabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    int tahun;
    bool valid_input = false; // Tambahkan variabel valid_input
    
    while (!valid_input) { // Ubah kondisi loop
        printf("Masukkan tahun (4 digit): ");
        if (scanf("%d", &tahun) != 1 || tahun < 1000 || tahun > 9999) {
            printf("Input tidak valid. Masukkan kembali tahun yang benar.\n");
            fflush(stdin); // Membersihkan buffer input
        } else {
            valid_input = true; // Set valid_input menjadi true
        }
    }
    
    // Cek apakah tahun kabisat atau bukan
    if (is_tahun_kabisat(tahun)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }
    
    return 0;
}
