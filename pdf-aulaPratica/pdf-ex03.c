#include <stdio.h>
int main()
{
    int idade, pessoas, x = 1;
    float i15 = 0, i16 = 0, i31 = 0, i46 = 0, i60 = 0;

    printf("Quantas idades deseja digitar? ");
    scanf("%d", &pessoas);
    while (x <= pessoas)
    {
        printf("Digite a idade da pessoa %d: ", x);
        scanf("%d", &idade);

        if (idade >= 1 && idade <= 15)
        {
            i15++;
            // printf("Faixa Etaria: 1 a 15 anos");
        }
        else if (idade >= 16 && idade <= 30)
        {
            i16++;
            // printf("Faixa Etaria: 16 a 30 anos");
        }
        else if (idade >= 31 && idade <= 45)
        {
            i31++;
            // printf("Faixa Etaria: 31 a 45 anos");
        }
        else if (idade >= 46 && idade <= 60)
        {
            i46++;
            // printf("Faixa Etaria: 46 a 60 anos");
        }
        else if (idade > 60)
        {
            i60++;
            // printf("Faixa Etaria: Mais de 60 anos");
        }

        x++;
    }

    if (x >= pessoas)

    {

        printf("\nPORCENTAGEM das Faixa etarias: \n1 a 15 anos - %.2f  \n16 a 30 anos - %.2f  \n31 a 45 anos - %.2f  \n46 a 60 anos - %.2f  \nMais de 60 anos - %.2f  \n", (i15 * 100) / pessoas, (i16 * 100) / pessoas, (i31 * 100) / pessoas, (i46 * 100) / pessoas, (i60 * 100) / pessoas);
    }

    return 0;
}