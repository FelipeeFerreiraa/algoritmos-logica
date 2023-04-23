#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota de suas tres provas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    nota3 = nota3 * 2;
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 60)
    {
        printf("APROVADO!!!!");
    }
    else
    {
        printf("REPROVADO!!!");
    }
    return 0;
}