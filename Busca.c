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
int achei =0;
int search=0;

//Fun�ao principal//

int main(){
    //INICIALIZA��O DA MEM�RIA
    for (i =0;i<10000;i++){
        vetor[i]=(rand()%10000);

    }
    //PARAMETRO DE BUSCA//
    printf("Digite o valor a ser buscado ");
    scanf("%d,&search");

    //BUSCA PROPRIAMENTE DITA//
    for (i=0;i<10000;i++){
        if (vetor[i]==search){
            achei=i;
        }
    }
    if (achei==-1){

        printf("errou");
    }else {
        printf("ACHEI KRALHO, posi��o %d ",achei);
    }
}
