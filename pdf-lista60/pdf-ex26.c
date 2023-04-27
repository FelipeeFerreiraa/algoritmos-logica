#include <stdio.h>
int main()
{
    int x = 1, num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (x <= num)
    {
        if (x % 11 == 0 || x % 13 == 0 || x % 17 == 0)
        {
            printf("%d, ", x);
        } 
        
        x++;
    }

    return 0;
}