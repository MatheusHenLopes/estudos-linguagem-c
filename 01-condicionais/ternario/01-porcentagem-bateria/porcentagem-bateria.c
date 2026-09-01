#include <stdio.h>

// CRIE UM PROGRAMA EM C QUE LEIA UM NUMERO INTEIRO RELATIVO A BATERIA DE UM DISPOSITIVO E RETORNE DIZENDO SE A BATERIA É SUFICIENTE OU ESTÁ MUITO FRACA

int main () {

    int bateriaMinima, bateriaAtual;

    bateriaMinima = 15;

    printf("Digite a bateria atual do seu dispositivo: ");
    scanf("%d", &bateriaAtual);

    bateriaAtual > bateriaMinima ? printf("%d%% de bateria esta dentro do limite, pode usar seu dispositivo normalmente.", bateriaAtual) : printf("Cuidado, sua bateria esta em %d%% e pode acabar em alguns minutos.", bateriaAtual);

    return 0;
}