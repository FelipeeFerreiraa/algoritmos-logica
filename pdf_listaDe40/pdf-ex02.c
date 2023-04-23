#include <stdio.h>
#include <math.h>
int main() {
    float numero, raiz;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero > 0) {
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.3f = %.3f",numero, raiz);
    } else if(numero < 0) {
        printf("Numero invalido, impossivel calcular a raiz quadrada");
    }
    return 0;

}