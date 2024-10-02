#include <stdio.h>

int main() 
{
    float a1;
    float a2;
    float hasil;
    char operator;

    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    
    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c",&operator);

    printf("Bilangan pertama: ");
    scanf("%f",&a1);

    printf("Bilangan kedua: ");
    scanf("%f",&a2);

    switch (operator) {
        case '+':
            hasil = a1+a2;
            break;
        case '-':
            hasil = a1 - a2;
            break;
        case '*':
            hasil = a1 * a2;
            break;
        case '/':
            hasil = a1 / a2;
            break;
        default:
            printf("Operator Salah.\n");
            return 1; 
        }
    
    printf("Hasilnya: %.2f", hasil);
}