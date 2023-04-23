#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    printf("Digite respectivamente a nota de suas duas provas: ");
    scanf("%f %f", &nota1, &nota2);
    if (nota1 >= 0.0 && nota1 <= 10.00)
    {
        if (nota2 >= 0.0 && nota2 <= 10.00)
        {
            media = (nota1 + nota2) / 2;
            printf("A media das duas notas eh = %.2f", media);
        }
    }
    else
    {
        printf("Nota invalida!!!!!");
    }
    return 0;
}