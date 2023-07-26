#include <stdio.h>
#include <locale.h>

int vetor[10];
int i = 0;

int main(){
    //inicialização da memória


    for (i=0;i<10;i++){
        vetor[i]=0;
    }
    //preenchimento do vetor
    for (i=0;i<10;i++){
        printf("Digite o valor da posição %d",i);
        scanf("%d",&vetor[i]);

    }
    //impressão do vetor
    for (i=0;i<10;i++){
        printf("vetor[%d]=%d\n",i,vetor[i]);
    }
}


