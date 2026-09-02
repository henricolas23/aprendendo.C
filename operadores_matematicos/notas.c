#include <stdio.h>

int main(int argc, char *argv[]){

    float nota1, nota2, media;
    printf ("digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;
    printf("a media das notas eh: %.2f\n", media);

    if(media >= 7){
        printf("aprovado\n");
    }else{
        printf("reprovado\n");
    }
    return 0;
}