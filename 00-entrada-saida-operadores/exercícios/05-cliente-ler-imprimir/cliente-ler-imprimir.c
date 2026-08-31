#include <stdio.h>

// FAÇA UM PROGRAMA EM C QUE LEIA O NOME, ENDEREÇO E O TELEFONE DE UM CLIENTE PARA AO FINAL SER ESSES DADOS

int main () {

    char nome[50];
    char endereco[50];
    int telefone;

    printf("Digite aqui seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite aqui seu a cidade onde voce mora: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite seu numero de telefone sem caracteres especiais, apenas digito: ");
    scanf("%d", &telefone);

    printf("\nDADOS DO CLIENTE\nNome: %sEndereco: %sTelefone: %d", nome, endereco, telefone);

    return 0;
}
