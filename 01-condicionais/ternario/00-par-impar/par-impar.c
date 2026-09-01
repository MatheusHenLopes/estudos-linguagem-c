#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE LEIA UM NUMERO INTEIRO INFORMADO PELO USUARIO E UTILIZE OPERADOR TERNARIO PARA EXIBIR SE ELE É PAR OU IMPAR

int main () {

    int number;

    printf("Digite um numero para que o programa te diga se ele e par ou impar: ");
    scanf("%d", &number);

    number % 2 == 0 ? printf("%d e um numero par!", number) : printf("%d e um numero impar!", number);

    return 0;
}