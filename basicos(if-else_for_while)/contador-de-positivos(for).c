#include <stdio.h>
int main(){

    int x, numeros, positivos = 0;

    scanf("%d", &x);

    for(int i=0; i<x; i++){
        scanf("%d", &numeros);
        if(numeros>0){
            positivos ++;
        }
    }

    printf("De %d numeros lidos, %d sao positivos", x, positivos);

    return 0;
}
