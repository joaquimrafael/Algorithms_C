/*Lista 1 - Projeto e Analise de Algoritmos
Exercicio 6 - Valor de Pi
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

double calcular_pi() {
    double pi = 0.0;
    double termo;
    double epsilon = 0.0001;
    int k = 1;

    do {
        termo = pow(-1, k + 1) * 4.0 / (2 * k - 1);
        pi += termo;
        k++;

        if (fabs(termo) < epsilon) {
            break;
        }
    } while (1);

    return pi;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    printf("O valor de pi calculado eh aproximadamente %.6lf\n", calcular_pi());

    return 0;
}

