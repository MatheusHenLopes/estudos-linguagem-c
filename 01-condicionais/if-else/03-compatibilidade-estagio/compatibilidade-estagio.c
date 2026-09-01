#include <stdio.h>

// CRIE UM PROGRAMA EM C QUE COMPARE OS REQUISITOS DE UMA VAGA COM UM CANDIDATO EM IDADE, ATIVIDADE ATUAL E DISPONIBILIDADE DE HORARIOS

int main () {

    int idadeCandidato, escolaridadeCandidato, disponibilidadeCandidato;

    printf("Voce esta se candidatando para uma vaga de estagio na empresa Alecrim, qual a sua idade? ");
    scanf("%d", &idadeCandidato);

    printf("Voce atualmente esta cursando alguma graduacao ou curso tecnico?\n1 - Sim \n2 - Nao\n ");
    scanf("%d", &escolaridadeCandidato);

    printf("Voce tem disponibilidade para o turno da manha ou da tarde?\n1 - Manha \n2 - Tarde\n ");
    scanf("%d", &disponibilidadeCandidato);

    if(idadeCandidato >= 16 && escolaridadeCandidato == 1 && disponibilidadeCandidato ==2) {
        printf("Voce esta apto para a vaga!");
    }
    else if (idadeCandidato < 16) {
        printf("Voce e menor de 16 anos, portanto nao pode se candidatar a vaga");
    }
    else if (escolaridadeCandidato == 2) {
        printf("Sinto muito, buscamos colocaboradores que estejam com os estudos ativos");
    }
    else {
        printf("Queremos um candidato que esteja disponivel durante o turno da tarde...");
    }

    return 0;
}
