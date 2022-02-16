#include <stdio.h>
#include <stdlib.h>

int main() {
    //Programa para saber se o Aluno esta Aprovado ou Reprovado

    float nota1, nota2, nota3, media;

    printf("-------------------------------------------");
    printf("\nDescubra aqui se esta Aprovado ou Reprovado");
    printf("\n-------------------------------------------");
    printf("\n\n Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\n Digite a terceira e ultima nota: ");
    scanf("%f", &nota3);
    printf("\n Calculando sua media.........");

    media = (nota1+nota2+nota3)/3;

    if (media >=6){
        printf("\n\n Parabens!!! Voce esta Aprovado! Sua media foi: %.2f", media); // o %.2f serve para, no resultado, aparecer apenas duas casa decimais!
    }
    else{
        printf("\n\n Lamento, voce esta Reprovado. Sua media foi: %.2f", media);
    }
    return 0;
}
