////BUSCA BI/////

///SÓ funciona se estiver ordenada/////

#include <stdio.h>

int vetor [10000];
int i =0;
int j=0;

int search=0;
int meio=0;
int fim =9999;
int inicio=0;
//Funçao principal//

int main(){
    //INICIALIZAÇÃO DA MEMÓRIA
    for (i =0;i<10000;i++){
        vetor[i]=i;

    }
    //PARAMETRO DE BUSCA//
    printf("Digite o valor a ser buscado ");
    scanf("%d",&search);

    //BUSCA PROPRIAMENTE DITA//
    while (fim>=inicio){
        meio = ((inicio+fim)/2);
        if (search==vetor[meio]){

            printf("ACHEI KRALHO, posição %d/n ",meio);
            return 0;
        }else if (search>vetor[meio]){
            inicio=(meio+1);
        }else {
            fim=(meio-1);
        }
    }
    printf("Inexistente");

}
