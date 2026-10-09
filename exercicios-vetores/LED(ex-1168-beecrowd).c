#include <stdio.h>

int main() {
    int n, contador, i, h;
    char v[1001];

    scanf("%d", &n); //lê quantas tentativas o usuário vai ter

    for(i=0;i<n;i++){
            contador = 0;
            scanf(" %s", v); //lê a string n vezes
        for(h=0;v[h]!='\0';h++){
            int num = 0;
            switch(v[h]){ //verifica o numero digitado e atualiza o contador
            case '1':
                contador+=2;
                break;
            case '2':
                contador+=5;
                break;
            case '3':
                contador+=5;
                break;
            case '4':
                contador+=4;
                break;
            case '5':
                contador+=5;
                break;
            case '6':
                contador+=6;
                break;
            case '7':
                contador+=3;
                break;
            case '8':
                contador+=7;
                break;
            case '9':
                contador+=6;
                break;
            case '0':
                contador+=6;
                break;
            }
        }
        printf("%d leds\n", contador);
    }

    return 0;
}
