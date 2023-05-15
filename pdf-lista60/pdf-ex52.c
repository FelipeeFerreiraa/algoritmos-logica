#include <stdio.h>
int main()
{

    int valor, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, nota1 = 0;

    printf("Digite um valor que deseja sacar no banco: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas20 = valor / 20;
    valor = valor % 20;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    notas2 = valor / 2;
    valor = valor % 2;
    nota1 = valor / 1;
    valor = valor % 1;

    printf("notas de 100 = %d\nnotas de 50 = %d\nnotas de 20 = %d\nnotas de 10 = %d\nnotas de 5 = %d\nnotas de 2 = %d\nnotas de 1 = %d\n", notas100, notas50, notas20, notas10, notas5, notas2, nota1);

        return 0;
}