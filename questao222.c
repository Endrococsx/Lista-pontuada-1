#include <stdio.h> 
int main(){ 
 
    int n, i, j; 
    do { 
        printf("digite o valor de N (deve ser >= 2): "); 
        scanf ("%d", &n); 
        if (n < 2) { 
            printf ("Valor invalido! N deve ser maior ou igual a 2.\n"); 
        } 
    } while (n < 2); 
 
    for (i= 1; i <= n; i++) { 
    for (j = 0; j < n -i; j++){ 
            printf (" "); 
        } 
    for (j = 1; j<= i; j++){ 
        printf ("%d ", j); 
    } 
    for (j = i - 1; j >= 1; j--){ 
        printf ("%d ", j); 
    } 
    printf("\n"); 
} 
}