#include <stdio.h>

// CRIE UM PROGRAMA EM C QUE RECEBA UM VALOR CORRESPONDENTE A TEMPERATURA ATUAL DE UMA CPU E DIGA SE ELE ESTA DENTRO OU FORA DOS LIMITES DE 50 C

int main () {

    float temperatura;

    printf("Digite a temperatura atual do processador: ");
    scanf("%f", &temperatura);

    if (temperatura <= 50) {
        printf("A temperatura de de %.2f C esta dentro dos limites, pode continuar usando normalmente", temperatura);
    }
    else {
        printf("Atencao, a temperatura do processador em %.2f C esta acima do recomendado, reduza seu uso", temperatura);
    }

    return 0;
}