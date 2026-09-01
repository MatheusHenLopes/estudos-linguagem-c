#include <stdio.h>

// CRIE UM PROGRAMA EM C QUE RETORNE A VIDA E O ESTADO DE UM PERSONAGEM DEPOIS DE RECEBER DANO DIGITADO PELO USUÁRIO

int main () {

    int vidaPersonagem, danoRecebido;

    vidaPersonagem = 50;

    printf("Digite o dano que seu personagem recebeu: ");
    scanf("%d", &danoRecebido);

    if (vidaPersonagem - danoRecebido >= 20) {
        printf("Sem ferimentos graves, o caminho pode contininuar");
    }
    else if(vidaPersonagem - danoRecebido >= 10 && vidaPersonagem - danoRecebido <= 19) {
        printf("Seu personagem esta ferido, tome cuidado.");
    }
    else if(vidaPersonagem - danoRecebido >= 1 && vidaPersonagem - danoRecebido <= 9) {
        printf("Seu personagem esta em estado critico, logo ele nao podera mais continuar");
    }
    else {
        printf("Seu personagem esta morto, tente mais uma vez outra hora");
    }
    
    return  0;
}