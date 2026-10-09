#include <stdio.h>
int main(){

    int qtd_num, i=0, num_exibidos=1;

    scanf("%d", &qtd_num);

    while(i<qtd_num){
        printf("%d\n", num_exibidos);
        num_exibidos ++;
        i ++;
    }

    printf("Foram mostrados %d numeros", qtd_num);

    return 0;
}
