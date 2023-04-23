#include <stdio.h>
int main() {
    int numero1, numero2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);
    if(numero1 > numero2 && numero2 < numero1) {
        printf("O maior eh o numero %d e a diferenca deles eh = %d", numero1, numero1 - numero2);
    } else if(numero2 > numero1 && numero1 < numero2) {
        printf("O maior eh o numero %d e a diferenca deles eh = %d", numero2, numero2 - numero1);
    }
    return 0;


}