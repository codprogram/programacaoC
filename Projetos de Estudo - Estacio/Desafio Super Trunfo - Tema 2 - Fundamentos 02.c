#include <stdio.h>

int main() {
    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //CARTA 1

    printf(" Cadastro Carta 1 \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // limpa o ENTER

    printf("Codigo (ex: A01): ");
    scanf(" %9s", codigo1);
    getchar(); // limpa o ENTER
    
    printf("Nome da cidade: ");
    scanf(" %49s", cidade1);
    getchar(); // limpa o ENTER

    printf("Populacao: ");
    scanf("%d", &populacao1);
    getchar(); // limpa o ENTER

    printf("Area (km²): ");
    scanf("%f", &area1);
    getchar(); // limpa o ENTER

    printf("PIB: ");
    scanf("%f", &pib1);
    getchar(); // limpa o ENTER

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    getchar(); // limpa o ENTER


    //CARTA 2
  
    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar(); // limpa o ENTER

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    getchar(); // limpa o ENTER

    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    getchar(); // limpa o ENTER

    printf("Populacao: ");
    scanf("%d", &populacao2);
    getchar(); // limpa o ENTER

    printf("Area (km²): ");
    scanf("%f", &area2);
    getchar(); // limpa o ENTER

    printf("PIB: ");
    scanf("%f", &pib2);
    getchar(); // limpa o ENTER

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    getchar(); // limpa o ENTER

    // SAÍDA

    printf("\n\n= CARTAS CADASTRADAS =\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
