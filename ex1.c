/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 1 - Primos
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>

void primos(int n1, int n2) {
    int i, j, div;

    printf("\nOs números primos são: ");
    for (i = n1; i <= n2; i++) {
        div = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                div += 1;
            }
        }
        if (div <= 2) {
            printf(" %d ", i);
        }
    }
}

int main() {
    int n1, n2;

    printf("Digite o 1° numero: \n");
    scanf("%d", &n1);

    printf("Digite o 2° numero: \n");
    scanf("%d", &n2);

    primos(n1, n2);

    return 0;
}
