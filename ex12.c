/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 12 - Matriz
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void geraMatriz(int n, int matriz[][10]) {
	int i, j;
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = 1 + (i < j ? i : j);
            if(matriz[i][j] > n - i) {
                matriz[i][j] = n - i;
            }
            if(matriz[i][j] > n - j) {
                matriz[i][j] = n - j;
            }
        }
    }
}

void imprimiMatriz(int n, int matriz[][10]) {
	int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número positivo n (n <= 10): ");
    scanf("%d", &n);

    if(n <= 0 || n > 10) {
        printf("Número inválido. O valor de N deve ser um número positivo menor ou igual a 10.\n");
        return 1; 
    }

    int matriz[10][10]; 

    geraMatriz(n, matriz);
    imprimiMatriz(n, matriz);

    return 0;
}

