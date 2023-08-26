#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int A, *B, **C, ***D;

    printf("Digite um numero: \n");
    scanf("%d", &A);

    B = &A;
    //*B = (*B) * 2;

    C = &B;
    //**C = **C * 3;

    D = &C;
    //***D = ***D * 4;

    printf("end[A] = %p, val[A] = %d \n", &A, A);
    printf("end[B] = %p, val[B] = %d \n", &B, (*B) * 2);
    printf("end[C] = %p, val[C] = %d \n", &C, (**C) * 3);
    printf("end[D] = %p, val[D] = %d \n", &D, (***D) * 4);

    return 0;
}