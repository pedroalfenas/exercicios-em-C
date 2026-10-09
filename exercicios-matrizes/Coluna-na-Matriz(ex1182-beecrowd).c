#include <stdio.h>

int main() {
    int num=0, i, j, coluna;
    double M[12][12], soma=0, media;
    char operacao;

    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(j==coluna){
                soma += M[i][j];
                num += 1;
            }
        }
    }

    media = soma/num;

    if(operacao=='S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", media);
    }

    return 0;
}
