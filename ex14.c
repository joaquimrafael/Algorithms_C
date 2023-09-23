/*Lista 1 - Projeto e Analise de Algoritmos
Exerc�cio 14 - Cifra
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <string.h>

char cifra(char letra, int deslocamento) {
    if (letra >= 'a' && letra <= 'z') {
        return ((letra - 'a' + deslocamento) % 26) + 'a';
    } else if (letra >= 'A' && letra <= 'Z') {
        return ((letra - 'A' + deslocamento) % 26) + 'A';
    } else {
        return letra; 
    }
}

int main() {
    char mensagem[1000];
    char chave[1000];
	int i;
	
    printf("Digite a mensagem a ser cifrada: ");
    scanf("%s", mensagem);
    printf("Digite a chave: ");
    scanf("%s", chave);

    int tamanho_mensagem = strlen(mensagem);
    int tamanho_chave = strlen(chave);

    printf("Mensagem cifrada: ");
    for (i = 0; i < tamanho_mensagem; i++) {
        char letra_mensagem = mensagem[i];
        char letra_chave = chave[i % tamanho_chave]; 
        int deslocamento = letra_chave - 'a'; 
        char letra_cifrada = cifra(letra_mensagem, deslocamento);
        printf("%c", letra_cifrada);
    }

    printf("\n");

    return 0;
}

