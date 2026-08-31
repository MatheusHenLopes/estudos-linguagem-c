// FAÇA UM PROGRAMA EM C QUE CALCULE A MÉDIA ARITMÉTICA ENTRE 4 NÚMEROS

#include <stdio.h>

int main () {

    int number1, number2, number3, number4;

    number1= 13;
    number2 = 47;
    number3 = 19;
    number4 = 24;

    printf("A media entre os valores %d, %d, %d e %d e igual a: %.2f", number1, number2, number3, number4, ((number1 + number2 + number3 + number4) / 4.0));

    return 0;
}