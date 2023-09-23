#include <stdio.h>
#include <stdlib.h>
/*Lista 1 - Projeto e Analise de Algoritmos
Exercicio 15 - Tempo: Horas e Minutos
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

typedef struct{
    int horas;
    int minutos;
}Horario;

void conversor(int *horas, int *minutos, int min_adicionar){
    int total_min;

    total_min = min_adicionar + *minutos;
    *horas = *horas + (total_min/60);
    *minutos = total_min %60;
}

int main(){
    int min;
    Horario tempo;

    printf("Digite o horario: ");
    scanf("%d:%d",&tempo.horas,&tempo.minutos);

    printf("Insira a quantidade de minutos: ");
    scanf("%d",&min);

    printf("%d:%d + %d ",tempo.horas, tempo.minutos, min);

    /*int new_horas = tempo.horas;
    int new_minutos = tempo.minutos;*/

    conversor(&tempo.horas,&tempo.minutos, min);

    /*tempo.horas = new_horas;
    tempo.minutos = new_minutos;*/

    printf("-> %dh:%dmin",tempo.horas, tempo.minutos);
    return 0;

}