#include <stdio.h>

int addition(int a, int b, int hasil) {
    hasil = a + b; 
    return hasil;
}

int subtraction(int a, int b, int hasil) {
    hasil = a - b;
    return hasil;
}

int multiplication(int a, int b, int hasil) {
    
}

int division(int a, int b, int hasil) {
	hasil = a/b;
	return hasil;
}

int main() {
    int pilihan;
    int angka1, angka2, hasil;
    printf("=== Kalkulator simple bahasa C===\n");
    printf("Input angka pertama : ");
    scanf("%d", &angka1);
    printf("Input angka kedua : ");
    scanf("%d", &angka2);
    printf("1. Addition\n2. Subtraction\n3. Multiplication \n4. Division\n");
    printf("Pilih untuk melakukan fungsi : ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        hasil = addition(angka1, angka2, hasil);
        printf("Hasil pertambahan %d dan %d adalah %d", angka1, angka2, hasil);
    }
    else if (pilihan == 2) {
        hasil = subtraction(angka1, angka2, hasil);
        printf("Hasil pengurangan %d dan %d adalah %d", angka1, angka2, hasil);
    }
    else if (pilihan == 3) {
	}
	else if (pilihan == 4) {
		hasil = division(angka1, angka2, hasil);
		printf("Hasil pembagian %d dengan %d adalah %d", angka1, angka2, hasil);
	}
	else {
		printf("Input pilihan kamu salah!");
	}
    return 0;
}