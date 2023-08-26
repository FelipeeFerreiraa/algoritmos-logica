#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void preechendoArray(int *vetor, int a);

int main()
{

    int array[5], num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    preechendoArray(array, num);

    printf("Elementos do array: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("%d, ", *(array + x));
    }
    return 0;
}

void preechendoArray(int *vetor, int a)
{
    for (int x = 0; x < 5; x++)
    {
        *(vetor + x) = a;
    }
}