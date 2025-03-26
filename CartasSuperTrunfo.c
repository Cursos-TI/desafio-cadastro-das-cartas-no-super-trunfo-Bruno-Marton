#include <stdio.h>
#include <string.h>

int main() {
    
    // Carta 1

    char Estado;
    char Codigo[50];
    char Cidade[50];
    int Populacao, Pontos_turisticos;
    float Area;
    float PIB;

    char Estado2;
    char Codigo2[50];
    char Cidade2[50];
    int Populacao2, Pontos_turisticos2;
    float Area2;
    float PIB2;

    printf("Digite o estado\n");
    scanf(" %c", &Estado);

    getchar();

    printf("Digite o Codigo da Carta\n");
    fgets(Codigo, 50, stdin);
    Codigo[strcspn(Codigo, "\n")] = 0;

    printf("Digite a cidade\n");
    fgets(Cidade, 50, stdin);
    Cidade[strcspn(Cidade, "\n")] = 0;
    
    printf("Digite a Populacao\n");
    scanf("%d", &Populacao);
    

    printf("Digite a area\n");
    scanf("%f", &Area);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);
    
    printf("Quantos pontos turisticos\n");
    scanf("%d", &Pontos_turisticos);
    
   // Carta 2

   printf("Digite o estado\n");
   scanf(" %c", &Estado2);

   getchar();

   printf("Digite o Codigo da Carta\n");
   fgets(Codigo2, 50, stdin);
   Codigo2[strcspn(Codigo2, "\n")] = 0;

   printf("Digite a cidade\n");
   fgets(Cidade2, 50, stdin);
   Cidade2[strcspn(Cidade2, "\n")] = 0;
   
   printf("Digite a Populacao\n");
   scanf("%d", &Populacao2);
   

   printf("Digite a area\n");
   scanf("%f", &Area2);

   printf("Digite o PIB\n");
   scanf("%f", &PIB2);
   
   printf("Quantos pontos turisticos\n");
   scanf("%d", &Pontos_turisticos2);

    printf("Nome do Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n",Populacao2);
    printf("Area: %2f\n", Area2);
    printf("PIB: %2f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);

    return 0;
    
}
