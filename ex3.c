/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 3 - Dígito verificador
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
	int mat;
	int ver;
} Matricula;

int verificar(int num) {
	int n = 2;
	int soma = 0;
	int numb;
	while(num > 0) {
		numb = num%10;
		soma += numb*n;
		n++;
		num/=10;
	}
		
	soma = soma%11;
	soma = 11 - soma;
		
	if(soma == 10 || soma == 11) {
		return 0;
	}else {
		return soma;
	}
	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Matricula dados[10];
	int i, res;
	
	for(i = 0; i < 10; i++) {
		printf("Digite a mátricula: ");
		scanf("%d", &dados[i].mat);
		
		printf("Digite o verificador: ");
		scanf("%d", &dados[i].ver);
		printf("\n");
	}
	
	printf("Matrícula              Mensagem\n");
	for(i = 0; i < 10; i++) {
		res = verificar(dados[i].mat);
		if(res == dados[i].ver) {
			printf("%d-%d               Dígito verificador correto\n", dados[i].mat, dados[i].ver);
		}else {
			printf("%d-%d               Dígito verificador incorreto\n", dados[i].mat, dados[i].ver);
		}
	}
	
	
	
	return 0;
}
