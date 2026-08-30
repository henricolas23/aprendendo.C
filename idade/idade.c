#include <stdio.h>

int main (int argc, char* argv []){
    
    int idade = 0;
    int ano = 0;

    printf("digite a idade e o ano: %d. \n");
    scanf("%d %d", &idade, &ano);

    printf("idade informada: %d. \n", idade);
    printf("ano informado: %d. \n", ano);
    
    
    return 0;
}