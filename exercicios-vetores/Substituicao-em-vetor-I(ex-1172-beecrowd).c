#include <stdio.h>

int main() {
    int X[10]={0}, i; //vetor e o numero digitado pelo usuario

    for(i=0;i<=9;i++){ //repetição
        scanf("%d", &X[i]);
        if(X[i]<1){ //iguala a 1 x[i] que for < 0;
            X[i]=1;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }


    return 0;
}
