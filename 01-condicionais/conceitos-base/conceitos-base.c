#include <stdio.h>

int main() {

    // Estruturas condicionais permitem executar diferentes blocos de código dependendo de uma condição.

    int idade = 18;
    int possuiCarteira = 1;

    // Operadores relacionais:
    // >  maior que
    // <  menor que
    // >= maior ou igual
    // <= menor ou igual
    // == igual
    // != diferente

    if (idade >= 18) {
        printf("O usuario e maior de idade.\n");
    }

    // o else executa quando a condição do if for falsa.

    int temperatura = 75;

    if (temperatura >= 70) {
        printf("Temperatura critica.\n");
    } else {
        printf("Temperatura dentro do limite.\n");
    }

    // else if ermite testar mais de uma possibilidade.

    float media = 6.5;

    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5) {
        printf("Aluno em recuperacao.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    // Operadores logicos:
    // && = E
    // || = OU
    // !  = NÃO

    if (idade >= 18 && possuiCarteira == 1) {
        printf("Pode dirigir.\n");
    }

    // switch
    // Util quando uma variavel pode assumir varias opcoes especificas.

    int opcao = 2;

    switch (opcao) {

        case 1:
            printf("Opcao 1 selecionada.\n");
            break;

        case 2:
            printf("Opcao 2 selecionada.\n");
            break;

        case 3:
            printf("Opcao 3 selecionada.\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    // Operador ternario
    // Forma reduzida de uma estrutura if/else simples.

    int idadeUsuario = 20;

    idadeUsuario >= 18 ? printf("Maior de idade.\n") : printf("Menor de idade.\n");

    return 0;
}