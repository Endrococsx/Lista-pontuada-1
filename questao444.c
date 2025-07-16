#include <stdio.h> 
int main(){ 
 
int altura, i, j; 
    int opcao; 
 
    
    printf("Informe a altura do quadrado: "); 
    scanf("%d", &altura); 
 
    
    printf("Escolha o tipo de quadrado:\n"); 
    printf("1 - Preenchido\n"); 
    printf("2 - Vazado\n"); 
    scanf("%d", &opcao); 
 
    printf("\n"); 
 
    for (i = 0; i < altura; i++) { 
        for (j = 0; j < altura; j++) { 
            if (opcao == 1) { 
                
                printf("*"); 
            } else if (opcao == 2) { 
                
if (i == 0 || i == altura - 1 || j == 0 || j == altura - 
1) { 
printf("*"); 
} else { 
printf(" "); 
} 
} else { 
printf("Opção inválida.\n"); 
return 1; 
} 
} 
printf("\n"); 
} 
return 0; 
} 
