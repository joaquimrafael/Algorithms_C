/*Lista 1 - Projeto e Analise de Algoritmos
Exerc�cio 13 - sequ�ncia de Farey
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>

int MaiorDivisorComum(int a, int b) {
    if (b == 0) return a;
    return MaiorDivisorComum(b, a % b);
}

int main() {
    int n,denom,numer,i,j;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Termos da sequ�ncia de Farey relativa a %d, 0 <= alpha <= 1:\n", n);

    int numeradores[1000];
    int denominadores[1000];
    int cont = 0;

    for (denom = 1; denom <= n; denom++) {
        for (numer = 0; numer <= denom; numer++) {
            if (MaiorDivisorComum(numer, denom) == 1) {
                numeradores[cont] = numer;
                denominadores[cont] = denom;
                cont++;
            }
        }
    }

    for (i = 0; i < cont - 1; i++) {
        for (j = i + 1; j < cont; j++) {
            double alpha1 = (double)numeradores[i] / denominadores[i];
            double alpha2 = (double)numeradores[j] / denominadores[j];
            if (alpha1 > alpha2) {
                int temp = numeradores[i];
                numeradores[i] = numeradores[j];
                numeradores[j] = temp;
                temp = denominadores[i];
                denominadores[i] = denominadores[j];
                denominadores[j] = temp;
            }
        }
    }

    for (i = 0; i < cont; i++) {
        printf("%d/%d\n", numeradores[i], denominadores[i]);
    }

    return 0;
}

