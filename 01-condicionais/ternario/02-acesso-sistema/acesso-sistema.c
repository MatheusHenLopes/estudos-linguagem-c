#include <stdio.h>

// CRIE UM PROGRAMA EM C UTILIZANDO CONDICIONAL TERNÁRIA PARA VERIFICAR SE O ACESSO DE UM USUÁRIO DENTRO DE UM SISTEMA LEVANDO EM CONSIDERAÇÃO SUA IDADE E AUTORIZAÇÃO.

int main () {

    int autorizacaoUsuario, idadeUsuario;

    printf("Digite sua idade: ");
    scanf("%d", &idadeUsuario);

    printf("Voce possui a autorizacao para acessar o sistema?\n1 - Sim | 2 - Nao\nDigite aqui sua resposta: ");
    scanf("%d", &autorizacaoUsuario);

    idadeUsuario >= 18 && autorizacaoUsuario == 1 ? printf("Acesse concedido!") : printf("Acesso negado!");

    return 0;
}