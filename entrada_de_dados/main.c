#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int idade = 0;
    float peso = 0.0;


    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("idade informada: %d \n", idade);
    printf("peso informdo: %f \n", peso);



    return 0;
}