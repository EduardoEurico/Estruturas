//////////////////////////////////////
//Programa de ORdena��o Direta//
//////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
//Declara��o de variaveis

int vetor [10000];
int i =0;
int j=0;
int troca = 1;

//Fun�ao principal//

int main(){
    //INICIALIZA��O DA MEM�RIA
    for (i =0;i<10000;i++){
        vetor[i]=(rand()%10000);

    }
    //IMPRESS�O//
    for (i=0;i<10000;i++){
        printf("%d\n",vetor[i]);
    }
    //ORDENA��o PROPRIAMENTE DITA//
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

