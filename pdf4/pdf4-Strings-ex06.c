#include <stdio.h>
#include <string.h>

struct cad
{
    char nome[50], sexo[50];
    int idade;
};

int main()
{
    struct cad entrada;

    printf("Digite seu nome: \n");
    setbuf(stdin, NULL);
    fgets(entrada.nome, 50, stdin);

    printf("Digite seu sexo: (feminino/masculino) \n");
    setbuf(stdin, NULL);
    fgets(entrada.sexo, 50, stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &entrada.idade);

    if (strlen(entrada.sexo) == 9 && entrada.idade < 25)      //feminino 8 caracteres mais o espaço
    {        //masculino tem 9 mais o espaço
        printf("Nome: %s \n", entrada.nome);
        printf("ACEITA");
    }
    else
    {
        printf("NAO-ACEITA");
    }

    /*
    printf(" %s \n", entrada.sexo);
    printf(" %d \n", entrada.idade);
    */

    return 0;
}