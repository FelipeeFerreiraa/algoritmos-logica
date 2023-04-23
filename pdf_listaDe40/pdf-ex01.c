#include <stdio.h>
int main() {
    float a, b;
    printf("Digite dois numeros, para verificar qual e o maior: ");
    scanf("%f %f", &a, &b);
    if(a > b && b < a) {
        printf("O numero %.1f e maior que o %.1f", a, b);
    } else if(b > a && a < b) {
        printf("O numero %.1f e maior que %.1f", b, a);
    }

    return 0;
}
