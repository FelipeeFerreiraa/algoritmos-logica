#include <stdio.h>
#include <strings.h>

int main()
{
    char nome[50];
    int x = 0;

    do
    {
        printf("Digite um nome: \n");
        setbuf(stdin, NULL);
        fgets(nome, 50, stdin);
        if (nome[0] == 'a' || nome[0] == 'A')
        {
            printf("Nome: %s \n", nome);
            printf("O nome informado comeca com A!!");
            break;
        }
        else if (nome[0] != 'a' || nome[0] != 'A')
        {
            printf("Ops, digite outro nome: \n");
        }

        x++;
    } while (nome[0] != 'a' || nome[0] != 'A');

    return 0;
}