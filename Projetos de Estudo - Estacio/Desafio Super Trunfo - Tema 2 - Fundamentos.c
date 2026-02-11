#include <stdio.h>  

int main(){

    int População, NumerodePontosTuristicos;
    char Estado[20], NomedaCidade[50], CodigodaCarta[20];
    float Àrea, PIB;

    printf("Digite a População: \n");
    scanf(" %d", &População);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &NumerodePontosTuristicos);

    printf("Digite o Estado: \n");
    scanf(" %s", Estado);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", NomedaCidade);

    printf("Digite o Código da Carta: \n");
    scanf(" %s", CodigodaCarta);

    printf("Digite a Área (em km²): \n");
    scanf(" %f", &Àrea);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    /* code */
    return 0;
}

