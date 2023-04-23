#include <stdio.h>
int main() {
    float numero1, numero2;
    printf("Digite dois numeros:" );
    scanf("%f %f", &numero1, &numero2);
    if(numero1 > numero2) {
        printf("Numero %.1f maior q o numero %.1f", numero1, numero2);
    } else if(numero2 > numero1) {
        printf("Numero %.1f maior q o numero %.1f", numero2, numero1);
    } else if(numero1 == numero2) {
        printf("Numeros Iguais");
    }

    return 0;
}