//////////////////////////////////////
//Programa de ORdenação Direta//
//////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
//Declaração de variaveis

int vetor [10000];
int i =0;
int j=0;
int troca = 1;

//Funçao principal//

int main(){
    //INICIALIZAÇÃO DA MEMÓRIA
    for (i =0;i<10000;i++){
        vetor[i]=(rand()%10000);

    }
    //IMPRESSÂO//
    for (i=0;i<10000;i++){
        printf("%d\n",vetor[i]);
    }
    //ORDENAÇÃo PROPRIAMENTE DITA//
    while (troca){
        troca=0;
        for (i=0;i<9999;i++){
            if (vetor[i]>vetor[i+1]){
                int temp = vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=temp;
                troca=1;
            }
        }
    }

            //do proximo ao ultimo

            if (vetor[i]>vetor[j]){
                int temp= vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temp;
            }


    for (i=0;i<10000;i++){
        printf("%d\n",vetor[i]);


    }
}

