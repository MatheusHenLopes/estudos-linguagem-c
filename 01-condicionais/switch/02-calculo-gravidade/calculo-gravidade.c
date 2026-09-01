#include <stdio.h>

// Escreva um programa em linguagem C que leia um peso na Terra e o número de um planeta e imprima o valor correspondente do peso neste planeta. A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra.

int main () {

    int codigoPlaneta;
    float pesoDesejado;

    printf("Tabela Codigos Gravidade Relativa Por Planeta\n---------------------------------------------\n|  Codigo  |  Gravidade Relativa  | Planeta |\n---------------------------------------------\n|     1    |         0.37         | Mercurio|\n---------------------------------------------\n|     2    |         0.88         |  Venus  |\n---------------------------------------------\n|     3    |         0.38         |  Marte  |\n---------------------------------------------\n|     4    |         2.64         | Jupiter |\n---------------------------------------------\n|     5    |         1.15         | Saturno |\n---------------------------------------------\n|     6    |         1.17         |  Urano  |\n---------------------------------------------");

    printf("\n\nDigite o peso que deseja usar para o calculo em kg: ");
    scanf("%f", &pesoDesejado);

    printf("\nDigite o codigo do planeta que deseja usar para o calculo: ");
    scanf("%d", &codigoPlaneta);

    switch (codigoPlaneta) {

        case 1: printf("Seu peso em Mercurio seria igual a: %.2f", (pesoDesejado / 10) * 0.37);
        break;

        case 2: printf("Seu peso em Venus seria igual a: %.2f", (pesoDesejado / 10) * 0.88);
        break;

        case 3: printf("Seu peso em Marte seria igual a: %.2f", (pesoDesejado / 10) * 0.38);
        break;

        case 4: printf("Seu peso em Jupiter seria igual a: %.2f", (pesoDesejado / 10) * 2.64);
        break;

        case 5: printf("Seu peso em Saturno seria igual a: %.2f", (pesoDesejado / 10) * 1.15);
        break;

        case 6: printf("Seu peso em Urano seria igual a: %.2f", (pesoDesejado / 10) * 1.17);
        break;

        default: printf("Valor invalido, digite um codigo que aparece na tabela.");
        break;

    }

    return 0;

}
