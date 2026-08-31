#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE LEIA DOIS NÚMEROS E IMPRIMA A SUBTRAÇÃO ENTRE ELES

int main () {

    int number1, number2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero: ");
    scanf("%d", &number2);

    printf("O resultado da subtracao: %d", (number1 - number2));

    return 0;

}