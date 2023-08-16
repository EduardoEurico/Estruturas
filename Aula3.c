#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///PROGRMA DE ENCADEAMENTO SIMPLES///

//Declaração da estrutura do nó//

struct no{
    int numero;
    struct no * proximo;

};

////Declaração de variaveis////


struct no *cabeca = NULL;


/////Função que insere um nó na lista/////

void inserir(int numero){
    ///alocação do espaço de memoria///
    struct no *novoNo = (struct no *)malloc(sizeof(struct no));
    novoNo -> numero=numero;
    novoNo -> proximo = NULL;

    if (cabeca== NULL){
    //caso facil, a lista está vazia//
        cabeca=novoNo;

    }else {
        //caso dificil, a lista NAO está vazia//
        struct no *ponteiro=cabeca;

        while (ponteiro->proximo!=NULL){
            ponteiro = ponteiro ->proximo;
        }
        ponteiro->proximo=novoNo;
    }

}
//FUNÇÂO QUE IMPRIME OS nos DA LISTA//

void imprimir(){
    printf("===================\n");

    struct no *ponteiro = cabeca;

    while (ponteiro!=NULL){
        printf("%d\n",ponteiro ->numero);
        ponteiro = ponteiro -> proximo;
    }
}

//FUNÇÂO EXCLUSÂO//

void remover(int numero){
    if (cabeca !=NULL){
        if (cabeca->numero ==numero){

            //caso facil,excluir o primeiro "no" da lista//
            struct no *ponteiroExcluir = cabeca;
            cabeca=cabeca -> proximo;
            free(ponteiroExcluir);
        }else{
            //caso dificil. excluir algum "no" no meio da lista//

            struct no *ponteiroAnterior=cabeca;

            while ((ponteiroAnterior->proximo!=NULL) && (ponteiroAnterior -> proximo ->numero !=numero)){
                ponteiroAnterior=ponteiroAnterior -> proximo;
            }
            if (ponteiroAnterior->proximo!=NULL){
                struct no *ponteiroExcluir=ponteiroAnterior -> proximo;
                ponteiroAnterior ->proximo = ponteiroExcluir ->proximo;
                free(ponteiroExcluir);
            }
        }
    }
}

//FUNÇÂP PRINCIPAL DE EXECUÇÂO DO PROGRAMA//

int main (int argc,char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;
    int numero = 0;
    while (opcao!=4){
        printf("+======================+\n");
        printf("|Menu opções|\n");
        printf("+======================+\n");
        printf("| 1. - Inserir |\n");
        printf("| 2. - Remover |\n");
        printf("| 3. - Imprimir |\n");
        printf("| 4. - Sair |\n");
        printf("+======================+\n");
        printf("Digite a opção\n");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                printf("Digite um numero: \n");
                scanf("%d",&numero);
                inserir(numero);
                break;
            case 2:
                printf("Digite um numero: \n");
                scanf("%d",&numero);
                remover(numero);
                break;
            case 3:
                imprimir();
                break;
    }
    }
}


