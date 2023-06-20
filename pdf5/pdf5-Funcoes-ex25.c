#include <stdio.h>
#include <string.h>

int somatorio(int n);

int main()
{

    int num, res;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    res = somatorio(num);

    printf("Somatorio de 1 ate %d = %d", num, res);

    return 0;
}

int somatorio(int n)
{
    if (n == 0)  //caso base 
    {
        return 0;
    } else {
        return n + somatorio(n-1);
    }
}