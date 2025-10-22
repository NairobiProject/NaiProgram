#include <stdio.h>
#include <stdlib.h>

int main() {
    // Estrutura de dados das cartas
    char pais1[30] = "Brasil";
    char pais2[30] = "Japão";

    // Atributos das cartas (valores de exemplo)
    float populacao1 = 213.0, populacao2 = 126.0;     
    float area1 = 8516.0, area2 = 378.0;              
    float pib1 = 2.05, pib2 = 5.0;                    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    float valor1a, valor1b, valor2a, valor2b;
    float soma1, soma2;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    // Escolha do primeiro atributo
    printf("Escolha o 1º atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Escolha do segundo atributo
    printf("\nEscolha o 2º atributo (diferente do primeiro):\n");
    switch (escolha1) {
        case 1:
            printf("2. Área\n3. PIB\n4. Densidade Demográfica\n");
            break;
        case 2:
            printf("1. População\n3. PIB\n4. Densidade Demográfica\n");
            break;
        case 3:
            printf("1. População\n2. Área\n4. Densidade Demográfica\n");
            break;
        case 4:
            printf("1. População\n2. Área\n3. PIB\n");
            break;
        default:
            printf("Opção inválida! Encerrando...\n");
            return 0;
    }

    printf("Opção: ");
    scanf("%d", &escolha2);

    // Verifica se o jogador escolheu o mesmo atributo
    if (escolha1 == escolha2) {
        printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Pega valores dos atributos conforme escolha
    switch (escolha1) {
        case 1: valor1a = populacao1; valor2a = populacao2; break;
        case 2: valor1a = area1; valor2a = area2; break;
        case 3: valor1a = pib1; valor2a = pib2; break;
        case 4: valor1a = densidade1; valor2a = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (escolha2) {
        case 1: valor1b = populacao1; valor2b = populacao2; break;
        case 2: valor1b = area1; valor2b = area2; break;
        case 3: valor1b = pib1; valor2b = pib2; break;
        case 4: valor1b = densidade1; valor2b = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Exibe valores escolhidos
    printf("\n=== COMPARAÇÃO ===\n");
    printf("%s:\n", pais1);
    printf("Atributo 1: %.2f\n", valor1a);
    printf("Atributo 2: %.2f\n", valor1b);
    printf("\n%s:\n", pais2);
    printf("Atributo 1: %.2f\n", valor2a);
    printf("Atributo 2: %.2f\n", valor2b);

    // Comparação especial: densidade vence com menor valor
    // (para soma, é usada como está)
    soma1 = valor1a + valor1b;
    soma2 = valor2a + valor2b;

    // Resultado
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma %s: %.2f\n", pais1, soma1);
    printf("Soma %s: %.2f\n", pais2, soma2);

    if (soma1 == soma2) {
        printf("\nEmpate!\n");
    } else if (soma1 > soma2) {
        printf("\n%s venceu!\n", pais1);
    } else {
        printf("\n%s venceu!\n", pais2);
    }

    return 0;
}