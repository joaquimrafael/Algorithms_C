/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 4 - Floyd
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void floyd(int linha){
	int num = 1,i,j;
    for (i = 1; i <= linha; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int linha;
	
	printf("Digite o n�mero de linhas: ");
	scanf("%d",&linha);
	
	floyd(linha);
	
	return 0;
}
