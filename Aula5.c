////////PROGRAMA DE IMPLEMENTAÇÂO DE UMA FILA////////////

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no{
    int numero;
    struct no *proximo;

};


///Declaração de variaveis///

struct no *cabeca=NULL;


/////Função que insere um nó na fila///////

void inserir(int numero){
    struct no *novoNo=(struct no *)malloc(sizeof(struct no));
    novoNo -> numero=numero;
    novoNo -> proximo = cabeca;
    cabeca = novoNo;
}


////Função que remove um Nó da fila////

int remover(){
    int retorno =-1;
    if (cabeca!=NULL){
        /////FILA COM 1 NÒ/////
        if (cabeca ->proximo ==NULL){
            retorno=cabeca->numero;
            free(cabeca);
            cabeca=NULL;
        }else {
        //////FILA COM MAIS DE 1 NÒ///////
        struct no *ponteiroAnterior=cabeca;


        ///PROCURA O PENULTIMO NÒ DA FILA/////
        while (ponteiroAnterior->proximo->proximo!=NULL){
            ponteiroAnterior=ponteiroAnterior->proximo;

        }
        ///Remoção do ultimo NÒ da fila///
        retorno =ponteiroAnterior->proximo->numero;
        free(ponteiroAnterior->proximo);
        ponteiroAnterior->proximo=NULL;

        }
}
    return retorno;
}

void imprimir(){
    struct no *ponteiro=cabeca;
    printf("==========FILA===========\n");
    while (ponteiro!=NULL){
        printf("%d\n", ponteiro->numero);
        ponteiro=ponteiro->proximo;


    }
    printf("\n");
}
///////FUNÇÂO PRINCIPAL////////////

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero=0;
    int opcao=0;
    while (opcao!=4){
        printf("+===============+\n");
        printf("| MENU OPÇÕES |\n");
        printf("+================+\n");
        printf("|  1-Inserir   |\n");
        printf("|  2-remover   |\n");
        printf("|  3-imprimir  |\n");
        printf("|  4-Sair      |\n");
        printf("+=================+\n");
        printf("Digite sua opção: \n");
        scanf("%d",&opcao);


        switch(opcao){
        case 1:
            printf("DIGITE UM NUMERO: ");
            scanf("%d",&numero);
            inserir(numero);
            break;
        case 2:
            printf("Removi o numero %d da fila \n",remover());
            break;
        case 3:
            imprimir();
            break;

        }
    }



}

