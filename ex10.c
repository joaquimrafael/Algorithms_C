/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 10 - Mínimos locais
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int n, i, j, num, dir, esq, cima, baixo;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	int **matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10; 
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Mínimos Locais: ");
    for(i = 1; i < n-1; i++) {
    	for(j = 1; j < n-1; j++) {
    		num = matriz[i][j];
    		esq = matriz[i][j - 1];
    		dir = matriz[i][j + 1];
    		cima = matriz[i - 1][j];
    		baixo = matriz[i + 1][j];
    		
    		if (num < esq && num < dir && num < cima && num < baixo) {
                printf("a%d,%d = %d\n", i+1, j+1, num);
            }
		}
	}
	
	return 0;
}
