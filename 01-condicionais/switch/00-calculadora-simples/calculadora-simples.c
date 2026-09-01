#include <stdio.h>

// Elabore um algoritmo que leia dois valores do usuário e a operação que ele deseja executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima na tela.

int main  () {

    float number1, number2;
    int operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &number1);

    printf("Digite o segundo numero: ");
    scanf("%f", &number2);

    printf("Qual operacao voce deseja realizar com os dois valores?\n1 - Soma | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao\nSua resposta: ");
    scanf("%d", &operacao);

    switch (operacao) {

        case 1: printf("O resultado da soma e igual a: %.2f", (number1 + number2));
        break;

        case 2: printf("O resultado da subtracao e igual a: %.2f", (number1 - number2));
        break;

        case 3: printf("O resultado da multiplicacao e igual a: %.2f", (number1 * number2));
        break;

        case 4: printf("O resultado da divisao e igual a: %.2f", (number1 /number2));
        break;

    }

    return 0;
}
