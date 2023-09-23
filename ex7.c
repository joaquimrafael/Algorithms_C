#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
#include <math.h>

/*Lista 1 - Projeto e Analise de Algoritmos
Exercício 7 - Dp, var e media
-Grupo:
 Joaquim Rafael Mariano Prieto Pereira - 42201731
 Antonio Carlos Sciamarelli Neto - 42209935 
 Henrique Arabe Neres de Farias- 42246830
*/

double calculaMedia(double v[], int n){
    int j;
    double soma = 0;
    double  media=0.0;
    for(j=0;j<n;j++){
        soma += v[j];
    }
    media = soma / n;

    return media;
}

double calculaDesvio(double v[], int n, double media){
    int i;
    double somatorio = 0.0, dp;
    for(i=0;i<n;i++){
        somatorio = somatorio + pow(v[i] - media, 2);
    }
    dp = sqrt(somatorio/n-1);
    return dp;
}

double calculaVar(double dp){
    double var = pow(dp,2);
    return var;
}
int main() {

    srand(time(NULL));

    int n;
    double media, dp, var;
    double vetor[100];
    int i;

    printf("Digite um valor n para a sequencia de numeros reais: ");
    scanf("%d",&n);

    for(i = 0; i<n;i++){
        vetor[i] = rand()%100;
    }

    media = calculaMedia(vetor, n);
    dp = calculaDesvio(vetor, n, media);
    var = calculaVar(dp);

    printf("\nSequencia de %d reais:", n);
    for(i = 0; i<n;i++){
        printf(" %.1f ",vetor[i]);
    }

    printf("\nMedia = %.1f\n", media);
    printf("Desvio padrao = %.1f\n", dp);
    printf("Variancia = %.1f\n", var);
    return 0;
}