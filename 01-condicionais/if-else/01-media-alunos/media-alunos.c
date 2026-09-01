#include <stdio.h>

// CRIE UM PROGRAMA EM C QUE RECEBA 3 NOTAS DE UM ALUNO, CALCULE A MEDIA E DIGA SE ELE ESTA APROVADO, DE RECUPERAÇÃO OU REPROVADO.

int main () {

    int nota1, nota2, nota3;

    printf("Digite a nota 1 do aluno: ");
    scanf("%d", &nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%d", &nota2);

    printf("Digite a nota 3 do aluno: ");
    scanf("%d", &nota3);

    int mediaNotas = (nota1 + nota2 + nota3) / 3;

    printf("A media do aluno e igual a: %d\n", mediaNotas);

    if(mediaNotas >= 7) {
        printf("O aluno foi aprovado");
    }
    else if (mediaNotas >= 5 && mediaNotas < 7) {
        printf("O aluno esta de recuperacao");
    }
    else {
        printf("O aluno foi reprovado");
    }

    return 0;
}