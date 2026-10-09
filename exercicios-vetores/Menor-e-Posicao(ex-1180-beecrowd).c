#include <stdio.h>

int main() {
    int N, i, valor, posicao = 0;

    scanf("%d", &N);
    int X[N];
    scanf("%d", &X[0]);
    valor = X[0];

    for(i=1;i<N;i++){
        scanf("%d", &X[i]);

        if(X[i]<valor){
            valor=X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", valor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
