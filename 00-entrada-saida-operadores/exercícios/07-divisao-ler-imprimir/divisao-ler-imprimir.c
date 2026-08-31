#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE LEIA IM NÚMERO REAL E IMPRIMA 1/4 DELE

int main () {

    int numberDivisao;

    printf("Digite o numero para descobrir quanto representa um quarto dele: ");
    scanf("%d", &numberDivisao);

    printf("Um quarto do seu numero a igual a: %d", (numberDivisao / 4));

    return 0;
}