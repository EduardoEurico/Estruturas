#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///PROGRMA DE ENCADEAMENTO SIMPLES///

//Declara��o da estrutura do n�//

struct no{
    int numero;
    struct no * proximo;

};

////Declara��o de variaveis////


struct no *cabeca = NULL;


/////Fun��o que insere um n� na lista/////

void inserir(int numero){
    ///aloca��o do espa�o de memoria///
    struct no *novoNo = (struct no *)malloc(sizeof(struct no));
    novoNo -> numero=numero;
    novoNo -> proximo = NULL;

    if (cabeca== NULL){
    //caso facil, a lista est� vazia//
        cabeca=novoNo;

    }else {
        //caso dificil, a lista NAO est� vazia//
        struct no *ponteiro=cabeca;

        while (ponteiro->proximo!=NULL){
            ponteiro = ponteiro ->proximo;
        }
        ponteiro->proximo=novoNo;
    }

}
//FUN��O QUE IMPRIME OS nos DA LISTA//

void imprimir(){
    printf("===================\n");

    struct no *ponteiro = cabeca;

    while (ponteiro!=NULL){
        printf("%d\n",ponteiro ->numero);
        ponteiro = ponteiro -> proximo;
    }
}

//FUN��O EXCLUS�O//

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

//FUN��P PRINCIPAL DE EXECU��O DO PROGRAMA//

int main (int argc,char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;
    int numero = 0;
    while (opcao!=4){
        printf("+======================+\n");
        printf("|Menu op��es|\n");
        printf("+======================+\n");
        printf("| 1. - Inserir |\n");
        printf("| 2. - Remover |\n");
        printf("| 3. - Imprimir |\n");
        printf("| 4. - Sair |\n");
        printf("+======================+\n");
        printf("Digite a op��o\n");
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


