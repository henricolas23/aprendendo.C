#include <stdio.h>

int main(int argc, char *argv[]){

    int numero = 0;
    printf("digite um numero qualquer, pode negativo ou positivo ou ate mesmo zero: \n");
    scanf("%d", &numero);

    if(numero <0){
        printf("o numero informado e negativo: %d \n", numero);
    }else if(numero >0){
        printf("o numero informado e positivo: %d \n", numero);
    }else{
        printf("o numero informado e zero: %d \n", numero);
    }


    return 0;
}