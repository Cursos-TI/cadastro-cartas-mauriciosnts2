#include <stdio.h>

/// variaveis que vão ser usadas no jogo

char codigo_carta[50];
char estado[50];
char cidade[50];
double populacao;
double area_km;
float pontos_turisticos;
double pib;

int main() {
	printf("Escolha o codigo da carta:");
	scanf("%49s", codigo_carta);
	printf("Escolha o estado:");
	scanf("%49s", estado);
	printf("Escolha a cidade:");
	scanf("%49s", cidade);
	printf("Escolha a populacao:");
	scanf("%lf", &populacao);
	printf("Escolha a area em km:");
	scanf("%lf", &area_km);
	printf("Escolha os pontos turisticos:");
	scanf("%f", &pontos_turisticos);
	printf("Escolha o PIB:");
	scanf("%lf", &pib);

	/// dados que serao mostrados no jogo

	printf("Codigo da carta: %s\n", codigo_carta);
	printf("Estado: %s\n", estado);
	printf("Cidade: %s\n", cidade);
	printf("Populacao: %.2f\n", populacao);
	printf("Area em km: %.2f\n", area_km);
	printf("Pontos turisticos: %.2f\n", pontos_turisticos);

	return 0;

}