#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE LEIA E IMPRIMA O SUCESSOR E O ANTECESSOR DE UM NÚMERO

int main () {

    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("O antecessor e o sucessor de %d sao respectivamente: %d e %d", number, (number - 1), (number + 1));

    return 0;
}