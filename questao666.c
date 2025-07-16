#include <stdio.h> 
int main (){ 
 
    int B, L, A; 
    int i, j; 
 
    
    do { 
        printf("Informe B (ímpar e >= 3): "); 
        scanf("%d", &B); 
        if (B < 3 || B % 2 == 0) { 
            printf("Erro: B deve ser ímpar e maior ou igual a 3.\n"); 
        } 
    } while (B < 3 || B % 2 == 0); 
 
    do { 
        printf("Informe L (largura do tronco, ímpar, >= 1 e <= B/2): "); 
        scanf("%d", &L); 
        if (L < 1 || L % 2 == 0 || L > B / 2) { 
            printf("Erro: L deve ser ímpar, maior ou igual a 1 e no máximo B/2.\n"); 
        } 
    } while (L < 1 || L % 2 == 0 || L > B / 2); 
 
    do { 
        printf("Informe A (altura do tronco, >= 2 e <= B/2): "); 
        scanf("%d", &A); 
        if (A < 2 || A > B / 2) { 
            printf("Erro: A deve ser no mínimo 2 e no máximo B/2.\n"); 
        } 
    } while (A < 2 || A > B / 2); 
 
    
    for (i = 1; i <= B; i += 2) { 
        int espacos = (B - i) / 2; 
        for (j = 0; j < espacos; j++) { 
            printf(" "); 
        } 
        for (j = 0; j < i; j++) { 
 printf("*"); 
        } 
        printf("\n"); 
    } 
 
    
    int troncoEspacos = (B - L) / 2; 
    for (i = 0; i < A; i++) { 
        for (j = 0; j < troncoEspacos; j++) { 
            printf(" "); 
        } 
        for (j = 0; j < L; j++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 