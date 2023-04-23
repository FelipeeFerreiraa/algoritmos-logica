#include <stdio.h>
#include <math.h>
int main() {
    float numero, raiz;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero > 0) {
        raiz = sqrt(numero);
        printf("A raiz quadrada do numero eh = %.2f e o quadrado desse mesmo numero eh = %.2f", raiz, numero*numero);
    } else {
        printf("Numero INVALIDO!!!");
    }
    return 0;
}