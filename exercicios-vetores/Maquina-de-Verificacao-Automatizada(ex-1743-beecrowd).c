#include <stdio.h>
int main() {
    int a[5], b[5];
    char result = 'N';

    for(int i=0; i<5 ; i++){
        scanf("%d", &a[i]); //vetor 1
    }

    for(int i=0; i<5 ; i++){
        scanf("%d", &b[i]); //vetor 2
    }

    for(int i=0; i<5; i++){
        if(a[i]!=b[i]){ //comparação entre os vetores
            result = 'Y';
        }else{
            result = 'N';
            break;
        }
    }
    printf("%c\n", result);
    }
