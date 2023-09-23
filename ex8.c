#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 8 - Subnumeros
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

int main(){
  int p, q, potencia, auxiliar, subnumero_q;
  bool prova;

  printf("Digite um numero P: ");
  scanf("%d",&p);

  printf("Digite outro numero Q(maior que P): ");
  scanf("%d", &q);

  if(p>q){printf("ERRO!(P digitado eh maior que Q)\n"); return 0;}

  potencia = 1;
  while(potencia <= p){ potencia = potencia * 10;}

  prova = false;
  auxiliar = q;

  while(auxiliar >= p && prova == false){
    subnumero_q = auxiliar % potencia;
    auxiliar = auxiliar / 10;

    if(subnumero_q == p){prova = true;}
  }

  if(prova){
    printf("O numero p (%d) eh subnumero de q (%d)",p,q);
  }else{printf("O numero p (%d) n eh subnumero de q (%d)",p,q);}

  return 0;
}