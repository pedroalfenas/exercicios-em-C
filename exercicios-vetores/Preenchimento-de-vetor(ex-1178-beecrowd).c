#include <stdio.h>

int main() {
    double X, N[100]; //X-> valor digitado pelo usuario

    scanf("%lf", &X);

    for(int i=0;i<100;i++){ //pega o X e divide por 2 a cada N[i]
        N[i]=N[i-1]/2;
        N[0]=X;
        printf("N[%d] = %.4lf\n", i, N[i]); //printa a posição dentro de N e o valor da divisão
    }

    return 0;
}
