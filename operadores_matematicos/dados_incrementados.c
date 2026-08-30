#include <stdio.h>

int main(int argc, char *argv[]){

    int dado = 10;
    printf("Dados antes do incremento: %d\n", dado);

    dado++;
    printf("Dados depois do incremneto: %d\n", dado);

    dado--;
    printf("Dados depois do decremnento: %d\n", dado);

    dado += 3;
    printf("Dados depois do incremento de 3 unidades: %d\n", dado);

    dado -= 2;
    printf("Dados depois do decremento de 2 unidades: %d\n", dado);

    dado *= 10;
    printf("Dados depois da multiplicacao por 10: %d\n", dado);


    return 0;
}