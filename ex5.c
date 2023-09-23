/*Lista 1 - Projeto e Analise de Algoritmos
Exercicio 5 - Aproximações sucessivas de Newton
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

double newton(double N) {
    double epsilon = 0.00001;
    double Ni = N / 2.0;
    double Ni1;

    do {
        Ni1 = 0.5 * (Ni + N / Ni);
        if (fabs(Ni1 - Ni) < epsilon) {
            return Ni1;
        }
        Ni = Ni1;
    } while (1);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    double N0;
    printf("Digite o numero para calcular a raiz quadrada: ");
    scanf("%lf", &N0);
    double resultado = newton(N0);
    printf("A raiz quadrada de %.1f e aproximadamente %.1f\n", N0, resultado);

    return 0;
}

