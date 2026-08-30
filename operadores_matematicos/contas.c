#include <stdio.h>

int main(int argc, char *argv[]){

    int A, B, soma, subtracao, multiplicacao, divisao;

    printf("digite o primeiro valor: \n");
    scanf("%d", &A);
    printf("digite o segundo valor: \n");
    scanf("%d", &B);

    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    printf("A soma dos valores e: %d\n ", soma);
    printf("A subtracao dos valores e: %d\n", subtracao);
    printf("A multiplicacao dos valors e: %d\n", multiplicacao);
    printf("A divisao dos valores e: %d\n", divisao);

    
    return 0;
}