#include <stdio.h>
int main() {
    int numero, digito, soma=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    while (numero > 0)
    {
        digito = numero % 10; //1234 == 4
        soma = soma + digito;
        numero = numero / 10;

    }
    

   
    printf("A soma de seus algarismos eh = %d", soma);
}