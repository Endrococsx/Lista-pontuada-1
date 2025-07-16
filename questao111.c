#include <stdio.h> 
int main(){ 
 
int altura, i, j, coeficiente; 
printf("digite altura triangulo"); 
scanf("%d", &altura); 
 
for (i = 0; i < altura; i++) { 
    for (j=0; j < altura - i - 1; j++) { 
        printf (" "); 
    } 
    coeficiente = 1; 
    for ( j = 0; j <=i; j++){ 
        printf("%d ", coeficiente); 
            coeficiente = coeficiente * (i - j) / (j + 1); 
        } 
 
        printf("\n"); 
    } 
 
    return 0; 
}