#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE RECEBA UM VALOR A PAGAR E RETORNE O VALOR COM DESCONTO APLICADO DE ACORDO COM A CATEGORIA DO CLIENTE.

int main () {

    float valorPagar;
    int funcaoCliente;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorPagar);

    printf("Digite o numero da categoria em que se encaixa:\n1 - Cliente\n2 - Cliente VIP\n3 - Funcionario\n");
    scanf("%d", &funcaoCliente);

    if (funcaoCliente == 1) {
        printf("Você não recebe desconto, o valor total da sua compra ficou em %.2f reais", valorPagar);
    }
    else if(funcaoCliente == 2) {
        printf("Voce recebeu desconto, o valor total da sua compra ficou em %.2f reais", valorPagar - (valorPagar * 0.15));
    }
    else {
        printf("Voce recebeu desconto, o valor toral da sua compra ficou em %.2f reais", valorPagar - (valorPagar * 0.15));
    }

    return 0;
}