/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 9 - Permutação
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contadigitos(int n, int d) {
    int count = 0;
    int digito;
    while(n > 0) {
        digito = n % 10;
        if(digito == d) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int permuta(int a, int b) {
    int tamA = 0;
    int tamB = 0;
    int auxA = a, auxB = b;
    int i;
	int countA = 0;
	int countB = 0;

    while(auxA > 0) {
        auxA /= 10;
        tamA++;
    }

    while(auxB > 0) {
        auxB /= 10;
        tamB++;
    }

    if(tamA != tamB) {
        return 0; 
    }
	
    for(i = 1; i <= 9; i++) {
        countA = contadigitos(a, i);
        countB = contadigitos(b, i);

        if(countA != countB) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("Digite o primeiro número positivo: ");
    scanf("%d", &a);

    printf("Digite o segundo número positivo: ");
    scanf("%d", &b);

    if(permuta(a, b)) {
        printf("%d é uma permutação de %d.\n", a, b);
    }else {
        printf("%d não é uma permutação de %d.\n", a, b);
    }

    return 0;
}

