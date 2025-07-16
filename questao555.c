#include <stdio.h> 
int main(){ 
 int altura, i, j; 
    char tipo; 
 
    
    printf("Informe altura do triângulo: "); 
    scanf("%d", &altura); 
 
    getchar(); 
 
    printf("Deseja o triângulo preenchido (p) ou vazado (v)? "); 
    scanf("%c", &tipo); 
 
    for (i = 1; i <= altura; i++) { 
        for (j = 1; j <= i; j++) { 
            if (tipo == 'p' || tipo == 'P') { 
                printf("*"); 
            } else if (tipo == 'v' || tipo == 'V') { 
                if (j == 1 || j == i || i == altura) { 
                    printf("*"); 
                } else { 
                    printf(" "); 
                } 
            } 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 