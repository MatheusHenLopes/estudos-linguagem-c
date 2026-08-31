#include <stdio.h>

int main() {

    // Declaração de variáveis

    int number1 = 24; // números inteiros
    float number2 = 3.14; // números decimais até 6/7 casas
    double number3 = 1.380211241711606; // números decimais além de 6/7 casas
    char nome[] = "Matheus"; // letras e símbolos
    
    // printf retorna a saída da variável na tela do usuário

    printf("%d\n", number1);
    printf("%f\n", number2);
    printf("%lf\n", number3);
    printf("%s\n", nome);

    // exemplo de construção

    printf("O estudante %s, sabe que o valor de PI e aproximadamente %f e calculou o log de %d, o resultado foi de %lf", nome, number2, number1, number3);


    return 0;
}

