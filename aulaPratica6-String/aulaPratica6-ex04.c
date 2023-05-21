#include <stdio.h>
#include <string.h>
int main()
{

    char nome[30], sobrenome[30], qtdLetras;
    setbuf(stdin, NULL);
    printf("Digite seu primeiro nome: \n");
    fgets(nome, 30, stdin);

    printf("Agora digite seu sobrenome: \n");
    fgets(sobrenome, 30, stdin);

    strcat(nome, sobrenome);

    qtdLetras = strlen(nome);
   

    printf("\n%s, possui %d caracteres, primeira letra eh = %c, ultima letra eh = %c", nome, qtdLetras, nome[0], nome[qtdLetras - 2]);

    return 0;
}