#include <stdio.h> 
int main(){
int largura, i, j; 
 
    // Solicita largura ímpar ao usuário 
    do { 
        printf("Informe a largura central do losango (ímpar): "); 
        scanf("%d", &largura); 
        if (largura % 2 == 0) { 
            printf("Por favor, digite um número ímpar.\n"); 
        } 
    } while (largura % 2 == 0); 
 
    int meio = largura / 2; 
 
    // Parte de cima do losango (inclui linha do meio) 
    for (i = 0; i <= meio; i++) { 
        int qtdx = 2 * i + 1; 
        int espacos = meio - i; 
 
        for (j = 0; j < espacos; j++) { 
            printf(" "); 
        } 
 
        for (j = 0; j < qtdx; j++) { 
            printf("X"); 
        } 
 
        printf("\n"); 
    } 
 
    // Parte de baixo do losango 
    for (i = meio - 1; i >= 0; i--) { 
        int qtdx = 2 * i + 1; 
        int espacos = meio - i; 
 
        for (j = 0; j < espacos; j++) { 
            printf(" "); 
        } 
 
        for (j = 0; j < qtdx; j++) {
             printf("X"); 
        } 
 
        printf("\n"); 
    } 
 
    return 0; 
}