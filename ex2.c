/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 2 - Numeros sem repetição
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 100

void imprimeVetor(int vetor[TAM], int count){
    int i, j;
    int vetor_unicos[TAM];
    int count_unicos = 0;

    for(i = 0; i < count;i++){
        int repetido = 0;
        for(j = 0; j < count_unicos; j++){
            if(vetor[i] == vetor_unicos[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            vetor_unicos[count_unicos] = vetor[i];
            count_unicos++;
        }
    }
    printf("Os números digitas sem repetição são: ");
    for(i = 0; i < count_unicos;i++){printf(" %d ",vetor_unicos[i]);}

    printf("\n");
}

int main(){
    int array[TAM];
    int i = 0, n, count=0;

    while(1){
        printf("Digite um número(-1 = flag): \n");
        scanf("%d", &n);

        if(n == -1){break;}

        array[i] = n;

        i++;
        count++;
    }


    imprimeVetor(array, count);
    return 0;
}