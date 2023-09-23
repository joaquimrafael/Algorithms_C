/*Lista 1 - Projeto e Analise de Algoritmos
Exerc�cio 11 - Reserva dos voos
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	int numVoo;
	int tipo;
	int lugares;
	float preco;
} Voo;

typedef struct {
	int identidade;
	int numVoo;
} Reserva;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, r, i, j;
	Voo voos[20];
	Reserva reservas[20];
	
	printf("Digite o n�mero de voos para cadastrar: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("\nDigite o n�mero do voo: ");
		scanf("%d", &voos[i].numVoo);
		
		printf("Digite o tipo do avi�o: ");
		scanf("%d", &voos[i].tipo);
		
		printf("Digite quantos lugares o voo tem: ");
		scanf("%d", &voos[i].lugares);
		
		printf("Digite o pre�o da passagem: ");
		scanf("%f", &voos[i].preco);
	}
	
	printf("\nDigite o n�mero de reservas a serem feitas: ");
	scanf("%d", &r);
	
	for(i = 0; i < r; i++) {
		printf("\nDigite a identidade do passageiro: ");
		scanf("%d", &reservas[i].identidade);
		
		printf("Digite o n�mero do voo desejado: ");
		scanf("%d", &reservas[i].numVoo);
		
		for(j = 0; j < n; j++) {
			if(reservas[i].numVoo == voos[j].numVoo) {
				if(voos[j].lugares > 0) {
					printf("\nIdentidade do passageiro: %d\n", reservas[i].identidade);
                	printf("N�mero do voo desejado: %d\n", voos[j].numVoo);
                	printf("Pre�o da passagem: %.2f\n", voos[j].preco);
                	printf("RESERVA CONFIRMADA\n");
                	voos[j].lugares--;
				}else {
					printf("\nIdentidade do passageiro: %d\n", reservas[i].identidade);
                	printf("N�mero do voo desejado: %d\n", voos[j].numVoo);
                	printf("VOO LOTADO!\n");
				}
			}
		}
	}
	
	return 0;
}
