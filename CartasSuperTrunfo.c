#include <stdio.h>

int main() {
    char estado;
    int cidade_num;
    long populacao;
    double area;
    long pib;
    int pontos_turisticos;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado); 

    printf("Digite o número da cidade: (1-4) ");
    scanf(" %d", &cidade_num);

    printf("Digite a populacao da cidade: ");
    scanf("%ld", &populacao);

    printf( "Digite a área da cidade (em km²): ");
    scanf("%lf", &area);

    printf( "Digite o PIB da cidade (em R$): ");
    scanf( "%ld", &pib);

    printf ( "Digite o número de pontos turisticos da cidade: ");
    scanf ( "%d", &pontos_turisticos );

    printf("\n--- Carta da Cidade ---\n");
    printf("Código da cidade: %c%d\n", estado, cidade_num);
    printf(" Populacao: %ld\n", populacao);
    printf(" Área: %.2f km²\n", area);
    printf(" PIB: R$ %ld\n", pib);
    printf(" Pontos turisticos: %d\n", pontos_turisticos);

    return 0;
}
