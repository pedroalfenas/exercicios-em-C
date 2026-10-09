#include <stdio.h>

int main() {
    int num=0, i, j;
    float M[12][12], soma=0, media=0;
    char operacao;

    scanf("%c", &operacao);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(j+i>11){
                soma += M[i][j];
                num += 1;
            }
        }
    }

    media = soma/num;

    if(operacao=='S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", media);
    }

    return 0;
}
