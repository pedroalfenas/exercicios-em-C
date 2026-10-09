#include <stdio.h>
int main(){
    double nota1, nota2, nota3, nota4, soma, media;

    printf("Digite suas notas:\n");

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    scanf("%lf", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = soma/4;

    if(media<4){
        printf("Reprovado!\n");
    }
    else if(media>=4 && media<6){
        printf("Recuperacao\n");
    }
    else{
        printf("Aprovado\n");
    }

    return 0;
}