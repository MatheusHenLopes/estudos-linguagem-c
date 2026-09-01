#include <stdio.h> 

// Escreva um programa utilizando o comando switch que imprima um mês de acordo com o número digitado pelo usuário.

int main () {

    int numeroMes;

    printf("Digite um numero de 1 ate 12 para que o programa retorne o respectivo mes do ano: ");
    scanf("%d", &numeroMes);

    switch (numeroMes) {

        case 1: printf("Voce escolheu o mes de Janeiro");
        break;

        case 2: printf("Voce escolheu o mes de Fevereiro");
        break;

        case 3: printf("Voce escolheu o mes de Marco");
        break;

        case 4: printf("Voce escolheu o mes de Abril");
        break;

        case 5: printf("Voce escolheu o mes de Maio");
        break;

        case 6: printf("Voce escolheu o mes de Junho");
        break;

        case 7: printf("Voce escolheu o mes de Julho");
        break;

        case 8: printf("Voce escolheu o mes de Agosto");
        break;

        case 9: printf("Voce escolheu o mes de Setembro");
        break;

        case 10: printf("Voce escolheu o mes de Outubro");
        break;

        case 11: printf("Voce escolheu o mes de Novembro");
        break;

        case 12: printf("Voce escolheu o mes de Dezembro");
        break;

        default: printf("Valor invalido, tente novamente");
        break;

    }
    
    return 0;
}